/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmds.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 22:32:07 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/07 23:32:27 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

static void	check_cmds(char **argv)
{
	while (*argv[2] && *argv[2] == ' ')
		argv[2]++;
	if (!*argv[2])
		error_exit("ERROR: cmd1 doesn't exist");
	while (*argv[3] && *argv[3] == ' ')
		argv[3]++;
	if (!*argv[3])
		error_exit("ERROR: cmd2 doesn't exist");
}

static void	check_cmds_paths(t_pipe *pipe)
{
	if (!pipe->cmd1.cmd_path && !pipe->cmd2.cmd_path)
		error_cmd(pipe, "ERROR: cmd1 and cmd2 are wrong!\n");
	else if (!pipe->cmd1.cmd_path)
		error_cmd(pipe, "ERROR: cmd1 is wrong!\n");
	else if (!pipe->cmd2.cmd_path)
		error_cmd(pipe, "ERROR: cmd2 is wrong!\n");
}

/*
    Splits argv[1 and 2] to get cmd and params.
*/
void	fill_cmd(t_pipe *pipe, char **argv, char **envp)
{
	check_cmds(argv);
	pipe->cmd1.cmd = ft_split(argv[2], ' ');
	pipe->cmd2.cmd = ft_split(argv[3], ' ');
	find_valid_path(envp, pipe, &(pipe->cmd1));
	find_valid_path(envp, pipe, &(pipe->cmd2));
	check_cmds_paths(pipe);
}
