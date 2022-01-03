/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:51:23 by bleaf             #+#    #+#             */
/*   Updated: 2022/01/03 22:09:25 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	char		*ret_str;
	static char	*wraped_sp;
	int			rd;

	if (fd < 0 || fd > 600 || BUFFER_SIZE < 0)
		return (NULL);
	wraped_sp = NULL;
	ret_str = ft_strdup(wraped_sp);
	rd = read(fd, buf, BUFFER_SIZE);
	while (rd != -1 && rd)
	{
		buf[rd] = '\0';
		
		if (ft_strchr(buf, '\n'))
		{
			//printf("%s - result of if\n", ft_strchr(buf, '\n')); /////// DEBUG
			wraped_sp = ft_strchr(buf, '\n');
			printf("FIRST:%s - ret_str\n", ret_str);/////// DEBUG
			ret_str = glue_and_free(ret_str, buf);
			printf("SECOND:%s - ret_str\n", ret_str);/////// DEBUG
			break ;
		}
		ret_str = glue_and_free(ret_str, buf);
		rd = read(fd, buf, BUFFER_SIZE);
	}
	if (!ret_str)
		return (NULL);
	return (ret_str);
}
