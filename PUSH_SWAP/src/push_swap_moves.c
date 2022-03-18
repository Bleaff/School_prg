/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 22:59:01 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/18 23:33:03 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void push(t_list **a, t_list **b)
{
	t_list *tmp;
	if(!(a))
		return ;
	tmp = (*a)->next;
	(*a)->next = (*b);
	b = a;
	(*a) = tmp;
}
void print_elem(void *a)
{
	t_list *tmp = a;
	ft_printf("%d ", (int)tmp->content);
}