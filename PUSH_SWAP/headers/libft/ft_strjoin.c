/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 23:47:24 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:12:29 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	size_t		len1;
	size_t		len2;
	int			i;
	int			j;
	char		*snew;

	if (!s1 || !s2)
		return (NULL);
	len1 = str_len(s1);
	len2 = str_len(s2);
	i = 0;
	j = 0;
	snew = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	if (!snew)
		return (NULL);
	while (s1[i])
	{
		snew[i] = s1[i];
		i++;
	}
	while (s2[j])
		snew[i++] = s2[j++];
	snew[i] = '\0';
	return (snew);
}
