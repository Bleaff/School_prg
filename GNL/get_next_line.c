/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 01:51:23 by bleaf             #+#    #+#             */
/*   Updated: 2022/01/07 03:37:09 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	find_nl(char *s)
{
	int	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*move_static(char *stat)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	if (!stat)
		return (NULL);
	while (stat[i] && stat[i] != '\n')
		i++;
	if (stat[i] == '\n')
		i++;
	res = (char *)malloc(sizeof(char) * (str_len(stat) - i + 2));
	j = 0;
	while (stat[i])
		res[j++] = stat[i++];
	res[j] = 0;
	free(stat);
	return (res);
}

char	*find_under_str(char *stat_st)
{
	int		i;
	int		j;
	char	*line;

	i = 0;
	j = 0;
	if (!stat_st)
		return (NULL);
	while (stat_st[i] && stat_st[i] != '\n')
		i++;
	if (stat_st[i] == '\n')
		i++;
	line = (char *)malloc(sizeof(char) * i + 1);
	if (!line)
		return (0);
	while (j < i)
	{
		line[j] = stat_st[j];
		j++;
	}
	line[j] = 0;
	return (line);
}

char	*read_from_fd(int fd, char *static_str)
{
	char	res[BUFFER_SIZE + 1];
	int		len;

	len = 1;
	while (len && !find_nl(static_str))
	{
		len = read(fd, res, BUFFER_SIZE);
		if (len == -1)
			return (NULL);
		res[len] = '\0';
		static_str = ft_strjoin(static_str, res);
	}
	return (static_str);
}

char	*get_next_line(int fd)
{
	char		*ans;
	static char	*static_str = NULL;

	if (fd < 0 || fd > 600 || BUFFER_SIZE < 0)
		return (NULL);
	static_str = read_from_fd(fd, static_str);
	if (!static_str)
		return (NULL);
	ans = find_under_str(static_str);
	if (!str_len(ans))
	{
		free(ans);
		if (static_str)
		{
			free(static_str);
			static_str = NULL;
		}
		return (NULL);
	}
	static_str = move_static(static_str);
	return (ans);
}
