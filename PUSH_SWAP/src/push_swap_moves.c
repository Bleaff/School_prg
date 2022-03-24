/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:59:01 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 16:28:46 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_push(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!(*a))
		return ;
	tmp = (*a);
	(*a) = (*a)->next;
	tmp->next = (*b);
	(*b) = tmp;
}

void	ft_rrlist(t_list **stk)
{
	t_list	*last;
	t_list	*prelast;

	if (!stk)
		return ;
	last = (*stk);
	while (last != NULL && (last)->next != NULL)
	{
		prelast = last;
		last = (last)->next;
	}
	prelast->next = NULL;
	last->next = *stk;
	*stk = last;
}

void	ft_rlist(t_list **stk)
{
	t_list	*tmp;

	if (!stk || !(*stk)->next)
		return ;
	tmp = *stk;
	*stk = (*stk)->next;
	tmp->next = NULL;
	ft_lstadd_back(stk, tmp);
}

void	ft_swaplist(t_list **lst)
{
	t_list	*tmp;

	if (!lst || !(*lst)->next)
		return ;
	tmp = (*lst)->next;
	(*lst)->next = tmp->next;
	tmp->next = *lst;
	*lst = tmp;
}

void	print_elem(int a)
{
	ft_printf("%d ", a);
}
