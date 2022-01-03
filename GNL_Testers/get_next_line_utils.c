/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 00:17:57 by bleaf             #+#    #+#             */
/*   Updated: 2022/01/03 22:06:43 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	str_len(const char *s)
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
		if (*s == (char) c && c == '\n')
			return ((char *)s);
		s++;
	}
	if (c == '\0' && *s == '\0')
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (NULL);
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
	{
		return (ft_strdup(buf));
	}
	else if (left && buf)
	{
		ret = ft_strjoin(left, buf);
		free(left);
		return (ret);
	}
	return (NULL);
}
