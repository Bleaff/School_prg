/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_sort_start.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 16:02:56 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/27 22:01:51 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	get_sort(t_list **a, t_list **b)
{
	int		size;
	t_list	*best;

	best = NULL;
	size = ft_lstsize(*a);
	if (size <= 3)
		sort3(a, 'a');
	else
	{
		while (ft_lstsize(*a) > 3 && !is_sorted(a))
			pr_push(a, b, 'b');
		if (!is_sorted(a))
			sort3(a, 'a');
		while (*b)
			algo_sorting(a, b, best);
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

t_list	*find_pos(t_list **a, int con)
{
	t_list	*head;

	head = find_min_elem(a);
	while (head && head->content < con)
		head = head->next;
	if (!head)
	{
		head = *a;
		while (head != find_min_elem(a) && head->content < con)
			head = head->next;
	}
	return (head);
}
