/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:12:38 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:12:38 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	id;

	i = 0;
	id = 0;
	while (dst[id] != '\0')
		id++;
	if (siz - 1 > id && siz > 0)
	{
		while (src[i] != '\0' && siz - id - i > 1)
		{
			dst[id + i] = src[i];
			i++;
		}
		dst[id + i] = '\0';
	}
	while (src[i] != '\0')
		i++;
	if (id >= siz)
		id = siz;
	return ((size_t) i + id);
}
