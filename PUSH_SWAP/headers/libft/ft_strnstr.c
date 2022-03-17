/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 04:13:07 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:13:07 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l_i;
	size_t	b_i;

	l_i = 0;
	b_i = 0;
	if (!little[0])
		return ((char *)big);
	while (b_i < len && big[b_i])
	{
		l_i = 0;
		while (big[b_i + l_i] == little[l_i] && (l_i + b_i < len)
			&& big[b_i + l_i] && little[l_i])
			l_i++;
		if (!little[l_i])
			return ((char *)(big + b_i));
		b_i++;
	}
	return (0);
}
