/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:43:05 by bleaf             #+#    #+#             */
/*   Updated: 2021/12/31 00:47:42 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "get_next_line.h"

// #define  BUFFER_SIZE 1

// char	*get_next_line(int fd)
// {
// 	char		*buf;
// 	char		*ret_str;
// 	static char	*wraped_sp;
// 	int			rd;
//
// 	buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
// 	wraped_sp = NULL;
// 	ret_str = ft_strdup(wraped_sp);
// 	rd = read(fd, buf, BUFFER_SIZE);
// 	while (rd)
// 	{
// 		buf[rd] = '\0';
// 		if (ft_strchr(buf, '\n'))
// 		{
// 			wraped_sp = ft_strchr(buf, '\n');
// 			ret_str = glue_and_free(ret_str, buf);
// 			break ;
// 		}
// 		ret_str = glue_and_free(ret_str, buf);
// 		rd = read(fd, buf, BUFFER_SIZE);
// 	}
// 	free(buf);
// 	if (!ret_str)
// 		return (NULL);
// 	return (ret_str);
// }

int main(void)
{
	char *print_f;
	int fd = open("TEST.txt",O_RDONLY );
	printf("fd=%d\n",fd);
	while (print_f = get_next_line(fd))
	{
		printf("%s", print_f);
	}
	return (0);
}
