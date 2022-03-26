/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_start.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:02:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/27 02:45:08 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	get_sort(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) <= 3)
		sort3(a, 'a');
	// else if (ft_lstsize(*a) <= 6)
	// 	sort6(a, b);
	else
	{
		while (ft_lstsize(*a) > 3 && !is_sorted(a))
			pr_push(a, b, 'b');
		if (!is_sorted(a))
			sort3(a, 'a');
		while (*b)
			algo_sorting(a, b);
		if (!is_sorted(a))
			min_on_top(a);
	}
}

void	sort2(t_list **a, char liter)
{
	if (!(*a) || !(*a)->next || is_sorted(a))
		return ;
	if ((*a)->content > (*a)->next->content)
		pr_swap(a, liter);
}

void	sort3(t_list **a, char liter)
{
	if (!(*a) || !(*a)->next || is_sorted(a))
		return ;
	else if (!(*a)->next->next)
	{
		sort2(a, liter);
		return ;
	}
	if ((*a)->content > (*a)->next->content
		&& (*a)->content > (*a)->next->next->content)
		pr_rlist(a, liter);
	else if ((*a)->next->content > (*a)->content
		&& (*a)->next->content > (*a)->next->next->content)
		pr_rrlist(a, liter);
	if (!is_sorted(a))
		sort2(a, liter);
}

void	sort6(t_list **a, t_list **b)
{
	int	i;

	i = -1;
	while (i++ < ft_lstsize(*a) / 2)
		pr_push(a, b, 'b');
	sort3(a, 'a');
	sort3(b, 'b');
	while (i--)
	{
		while ((*b)->content > (*a)->content && !((*b)->content
				== find_max(b) && (*a)->content == find_min(a)))
		{
			if (get_pos_top(a, (*b)->content)
				>= get_pos_bottom(a, (*b)->content))
				pr_rrlist(a, 'a');
			else
				pr_rlist(a, 'a');
		}
		pr_push(b, a, 'b');
	}
	if (!is_sorted(a))
		min_on_top(a);
}
