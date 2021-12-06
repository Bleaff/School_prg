/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:51:23 by bleaf             #+#    #+#             */
/*   Updated: 2021/12/04 01:31:40 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	

char	*get_next_line(int fd)
{
	char		*buf;
	char		*ret_str;
	static char	*wraped_sp;
	int			rd;

	if (fd > 2000 || fd < 0)
		return (NULL);
	wraped_sp = ;
	ret_str = ft_strdup(wraped_sp);
	rd = 1;
	while (rd)
	{
		rd = read(fd, buf, BUFFER_SIZE);
		buf[rd] = '\0';
		if (ft_strchr(buf, '\n'))
		{
			wraped_sp = ft_strchr(buf, '\n');
			ret_str = glue_and_free(ret_str, buf);
			break ;
		}
		ret_str = glue_and_free(ret_str, buf);
	}
	if (!ret_str)
		return (NULL);
	return (ret_str);
}

int main(void)
{
	char *print_f;
	int fd = open("TEST.txt",O_RDONLY );
	while (print_f = get_next_line(fd))
	{
		printf("%s", print_f);
	}
	return (0);
}
