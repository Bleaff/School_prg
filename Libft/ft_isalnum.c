/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 00:35:00 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/08 20:35:34 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "libft.h"

int	ft_isalnum(int n)
{
	if ((n > 64 && n < 91) || (n > 96 && n < 123) || (n >= 48 && n <= 57))
		return (1);
	return (0);
}
