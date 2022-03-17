/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:13:01 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:13:02 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int					i;
	const unsigned char	*sn1;
	const unsigned char	*sn2;

	sn1 = (unsigned char *) s1;
	sn2 = (unsigned char *) s2;
	i = 0;
	while ((sn1[i] || sn2[i]) && n--)
	{
		if (sn1[i] != sn2[i])
			return (sn1[i] - sn2[i]);
		i++;
	}
	return (0);
}
