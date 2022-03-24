/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:34:10 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 16:24:38 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	error(void)
{
	write(1, "Error\n", 6);
	exit(-1);
}

int	ps_atoi(const char *str)
{
	int		i;
	long	res;
	int		neg;

	neg = 1;
	res = 0;
	i = 0;
	if (str[0] == '-')
	{
		i = 1;
		neg = -1;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + (str[i] - '0');
		else
			error();
		if (res * neg > INT_MAX || res * neg < INT_MIN)
			error();
		i++;
	}
	return (res * neg);
}
