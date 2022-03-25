/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 10:34:10 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/25 16:25:28 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	find_min(t_list **a)
{
	t_list	*iter;
	int		min;

	iter = *a;
	min = iter->content;
	while (iter)
	{
		if (min > iter->content)
			min = iter->content;
		iter = iter->next;
	}
	return (min);
}

void	min_on_top(t_list **a)
{
	int		min;

	if (!(*a))
		return ;
	min = find_min(a);
	while ((*a)->content != min)
	{
		if (get_pos_top(a, min)
			>= get_pos_bottom(a, min))
			pr_rrlist(a, 'a');
		else
			pr_rlist(a, 'a');
	}
}

int	min(int a, int b)
{
	if (a <= b)
		return (a);
	return (b);
}

int	max(int a, int b)
{
	if (a >= b)
		return (a);
	return (b);
}
