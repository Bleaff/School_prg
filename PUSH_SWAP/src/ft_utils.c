/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:34:10 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/27 02:40:41 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	error(void)
{
	write(2, "Error\n", 6);
	exit(1);
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

int	find_max(t_list **a)
{
	t_list	*iter;
	int		max;

	iter = *a;
	max = iter->content;
	while (iter)
	{
		if (max < iter->content)
			max = iter->content;
		iter = iter->next;
	}
	return (max);
}

int	get_pos_top(t_list **a, int con)
{
	t_list	*iter;
	int		i;

	i = 0;
	if (!(*a))
		return (-1);
	iter = *a;
	if (con > find_max(a))
	{
		while (iter && iter->content != find_min(a))
		{
			iter = iter->next;
			i++;
		}
	}
	else if (con < find_max(a))
	{
		while (iter && con > iter->content)
		{
			iter = iter->next;
			i++;
		}
	}
	return (i);
}

int	get_pos_bottom(t_list **a, int con)
{
	t_list	*iter;
	int		i;

	i = 0;
	if (!(*a))
		return (-1);
	iter = *a;
	if (con > find_max(a))
		while (iter && iter->content != find_min(a))
			iter = iter->next;
	else if (con < find_max(a))
		while (iter && con > iter->content)
			iter = iter->next;
	while (iter)
	{
		i++;
		iter = iter->next;
	}
	return (i);
}
