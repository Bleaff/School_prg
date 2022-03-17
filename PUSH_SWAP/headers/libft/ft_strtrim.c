/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:13:26 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:13:26 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	char_in_set(const char *set, char ch)
{
	while (*set)
	{
		if (ch == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	begin;
	size_t	end;
	char	*new;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] && char_in_set(set, s1[begin]))
		begin++;
	while (begin < end && char_in_set(set, s1[end - 1]))
		end--;
	new = (char *)malloc(sizeof(char) * (end - begin + 1));
	if (!new)
		return (NULL);
	while (begin < end)
		new[i++] = s1[begin++];
	new[i] = '\0';
	return (new);
}
