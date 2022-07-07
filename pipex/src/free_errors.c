/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 01:28:01 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/07 23:35:08 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

/*
	Frees arrays of words.
*/
static void	free_words(char **sent)
{
	int	i;

	i = 0;
	if (!sent)
		return ;
	while (sent[i])
		free(sent[i++]);
	free(sent);
}

void	free_struct(t_pipe *pipe)
{
	if (pipe->cmd1.cmd)
		free(pipe->cmd1.cmd_path);
	if (pipe->cmd2.cmd_path)
		free(pipe->cmd2.cmd_path);
	if (pipe->cmd1.cmd)
		free_words(pipe->cmd1.cmd);
	if (pipe->cmd2.cmd)
		free_words(pipe->cmd2.cmd);
}

void	error_exit(char *msg)
{
	ft_putstr_fd(msg, 2);
	exit(EXIT_FAILURE);
}

void	error_cmd(t_pipe *pipe, char *msg)
{
	free_struct(pipe);
	error_exit(msg);
}
