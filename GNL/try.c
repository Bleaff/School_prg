/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   try.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 18:43:05 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/28 04:27:20 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

static size_t	str_len(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int			i;
	int			j;
	char		*snew;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	snew = (char *)malloc(sizeof(char) * (str_len(s1) + str_len(s2) + 1));
	if (!snew)
		return (NULL);
	while (s1[i])
	{
		snew[i] = s1[i];
		if (s1[i++] == '\n')
			break ;
	}
	while (s2[j])
	{
		snew[i++] = s2[j++];
		if (s2[j - 1] == '\n')
			break ;
	}
	snew[i] = '\0';
	return (snew);
}

char	*ft_strchr(const char	*s, int c)
{
	while (*s)
	{
		if (*s == (char) c || c == '\n')
			return ((char *)s);
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	i = 0;
	while (src[i++])
	{
	}
	dest = (char *)malloc(sizeof(char) * i);
	if (!dest)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*glue_and_free(char *left, char *buf)
{
	char	*ret;

	if (!left)
		return (ft_strdup(buf));
	else if (!left || !buf)
	{
		ret = ft_strjoin(left, buf);
		free(left);
		return (ret);
	}
}

#define BUFFER_SIZE 4

char	*get_next_line(int fd)
{
	char		buf[BUFFER_SIZE + 1];
	char		*ret_str;
	static char	*wraped_sp;
	int			rd;

	ret_str = NULL;
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

int main(void)
{
	char *print_f;
	int fd = open("TEST.txt",O_RDONLY );

	while (print_f = get_next_line(fd))
	{
		printf("Paragraph: %s", print_f);
	}
	return (0);
}
