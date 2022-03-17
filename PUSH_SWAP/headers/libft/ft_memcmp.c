/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:10:57 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:10:58 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sn1;
	unsigned char	*sn2;
	size_t			i;

	sn1 = (unsigned char *) s1;
	sn2 = (unsigned char *) s2;
	i = 0;
	while (n--)
	{
		if ((sn1[i] - sn2[i]) != 0)
			return (sn1[i] - sn2[i]);
		i++;
	}
	return (0);
}
