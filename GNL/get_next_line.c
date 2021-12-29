/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:51:23 by bleaf             #+#    #+#             */
/*   Updated: 2021/12/04 00:26:26 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	char		*ret_str;
	static char	*wraped_sp;
	int			rd;

	wraped_sp = NULL;
	ret_str = ft_strdup(wraped_sp);
	rd = read(fd, buf, BUFFER_SIZE);
	while (rd)
	{
		buf[rd] = '\0';
		if (ft_strchr(buf, '\n'))
		{
			wraped_sp = ft_strchr(buf, '\n');
			ret_str = glue_and_free(ret_str, buf);
			break ;
		}
		ret_str = glue_and_free(ret_str, buf);
		rd = read(fd, buf, BUFFER_SIZE);
	}
	if (!ret_str)
		return (NULL);
	return (ret_str);
}

