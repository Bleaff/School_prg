/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:11:12 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:11:12 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const char	*sou;
	char		*des;

	if (!dst && !src)
		return (NULL);
	sou = (const char *) src;
	des = (char *) dst;
	if (sou > des)
	{
		while (len--)
			*des++ = *sou++;
	}
	else
	{
		while (len--)
			*(des + len) = *(sou + len);
	}
	return (dst);
}
