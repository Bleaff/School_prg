/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:17:57 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/11 23:43:46 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

size_t	str_len(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*my_strjoin(char *s1, char *s2)
{
	char		*res;
	size_t		i;
	size_t		len;

	i = -1;
	if (!s1)
	{
		s1 = (char *)malloc(sizeof(char) * 1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	res = (char *) malloc(sizeof(char) * (str_len(s1) + str_len(s2)) + 1);
	if (res == NULL)
		return (NULL);
	while (s1[++i])
		res[i] = ((char *)s1)[i];
	len = 0;
	while (s2[len])
		res[i++] = ((char *)s2)[len++];
	res[i] = '\0';
	free(s1);
	return (res);
}

char	*my_strchr(const char	*s, int c)
{
	if (!s)
		return (NULL);
	while (*s)
	{
		if (*s == (char) c)
			return ((char *)(++s));
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	return (NULL);
}

char	*my_strdup(const char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
	i = 0;
	while (src[i])
		i++;
	if (i == 0)
		return (NULL);
	dest = (char *)malloc(sizeof(char) * i);
	if (!dest)
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		if (src[i++] == '\n')
			break ;
	}
	dest[i] = '\0';
	return (dest);
}
