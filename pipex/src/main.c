/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:48:42 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/07 23:50:56 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

static void	first_child(char **envp, t_pipe *pipex)
{
	close(pipex->fd[0]);
	close(pipex->fd_outfile);
	if (dup2(pipex->fd_infile, STDIN_FILENO) < 0)
		error_cmd(pipex, "ERROR: dup2-ing failed infile!\n");
	if (dup2(pipex->fd[1], STDOUT_FILENO) < 0)
		error_cmd(pipex, "ERROR: dup2-ing failed fd!\n");
	execve(pipex->cmd1.cmd_path, pipex->cmd1.cmd, envp);
	close(pipex->fd[1]);
	close(pipex->fd_infile);
	exit(EXIT_FAILURE);
}

static void	second_child(char **envp, t_pipe *pipex)
{
	close(pipex->fd[1]);
	close(pipex->fd_infile);
	if (dup2(pipex->fd[0], STDIN_FILENO) < 0)
		error_cmd(pipex, "ERROR: dup2-ing failed fd[0]!\n");
	if (dup2(pipex->fd_outfile, STDOUT_FILENO) < 0)
		error_cmd(pipex, "ERROR: dup2-ing failed outfile!\n");
	execve(pipex->cmd2.cmd_path, pipex->cmd2.cmd, envp);
	close(pipex->fd[0]);
	close(pipex->fd_outfile);
	exit(EXIT_FAILURE);
}

int	main(int argc, char *argv[], char *envp[])
{
	t_pipe	pipex;
	int		pid_1;
	int		pid_2;

	check_validation(&pipex, argc, argv, envp);
	pid_1 = fork();
	if (pid_1 < 0)
		error_cmd(&pipex, "Error forking cmd1!\n");
	if (!pid_1)
		first_child(envp, &pipex);
	pid_2 = fork();
	if (pid_2 < 0)
		error_cmd(&pipex, "Error forking cmd2!\n");
	if (!pid_2)
		second_child(envp, &pipex);
	waitpid(0, NULL, 0);
	free_struct(&pipex);
	return (0);
}
