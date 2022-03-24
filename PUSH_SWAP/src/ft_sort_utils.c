/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:01:16 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 21:48:48 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	is_sorted(t_list **stk)
{
	int		check;
	t_list	*lst;

	lst = *stk;
	if (!*stk)
		return (0);
	check = lst->content;
	while (lst)
	{
		if (check > lst->content)
			return (0);
		else
			check = lst->content;
		lst = lst->next;
	}
	return (1);
}

int	is_unq_stack(t_list	**lst)
{
	t_list	*il;
	t_list	*jl;

	il = *lst;
	while (il)
	{
		jl = il->next;
		while (jl)
		{
			if (il->content == jl->content)
				error();
			jl = jl->next;
		}
		il = il->next;
	}
	return (1);
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
	if ((*a)->content > (*a)->next->content && 
		(*a)->content > (*a)->next->next->content)
		pr_rlist(a, liter);
	else if ((*a)->next->content > (*a)->content &&
		(*a)->next->content > (*a)->next->next->content)
		pr_rrlist(a, liter);
	if (!is_sorted(a))
		sort2(a,liter);
}

// void	sort6(t_list **a, t_list **b)
// {
// 	int	i;

// 	i = 3;
// 	while ()
// }
