/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 23:20:19 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/07 23:33:15 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"
/*
	Provides checking argv
*/

void	check_validation(t_pipe *pipex, int argc, char **argv, char **envp)
{
	if (argc != 5)
		error_exit("Wrong number of arguments!\n");
	fill_cmd(pipex, argv, envp);
	pipex->in = argv[1];
	pipex->out = argv[4];
	pipex->fd_infile = open(pipex->in, O_RDONLY, 0777);
	if (pipex->fd_infile < 0)
		error_cmd(pipex, "ERROR: unable to open infile!\n");
	pipex->fd_outfile = open(pipex->out, O_WRONLY | O_CREAT | O_TRUNC, 0777);
	if (pipex->fd_outfile < 0)
		error_cmd(pipex, "ERROR: unable to open outfile!\n");
	if (pipe(pipex->fd) == -1)
		error_cmd(pipex, "Piping error!\n");
}
