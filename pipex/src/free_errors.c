/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_errors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/03 01:28:01 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/03 01:47:09 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/pipex.h"

/*
	Frees arrays of words.
*/
static void	free_words(char **sent)
{
	int i;

	i = 0;
	if (!sent)
		return ;
	while (sent[i])
	{
		free(sent[i++]);
	}
	free(sent);
}

void error_cmd(char *msg, t_cmd *cmd)
{
	free_words(cmd->cmd);
	free(cmd->cmd_path);
	free(cmd);

}