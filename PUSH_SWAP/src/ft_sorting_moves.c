/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorting_moves.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 00:45:35 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/27 01:03:39 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	both_top(int a_s, int b_s, t_list **a, t_list **b)
{
	while (a_s && b_s)
	{
		rr(a, b);
		a_s--;
		b_s--;
	}
	while (a_s--)
		pr_rlist(a, 'a');
	while (b_s--)
		pr_rlist(b, 'b');
	pr_push(a, b, 'a');
}

void	both_bottom(int a_s, int b_s, t_list **a, t_list **b)
{
	while (a_s && b_s)
	{
		rrr(a, b);
		a_s--;
		b_s--;
	}
	while (a_s--)
		pr_rrlist(a, 'a');
	while (b_s--)
		pr_rrlist(b, 'b');
	pr_push(a, b, 'a');
}

void	at_bb(int a_s, int b_s, t_list **a, t_list **b)
{
	while (a_s)
	{
		pr_rlist(a, 'a');
		a_s--;
	}
	while (b_s)
	{
		pr_rrlist(b, 'b');
		b_s--;
	}
	pr_push(a, b, 'a');
}

void	ab_bt(int a_s, int b_s, t_list **a, t_list **b)
{
	while (a_s)
	{
		pr_rrlist(a, 'a');
		a_s--;
	}
	while (b_s)
	{
		pr_rlist(b, 'b');
		b_s--;
	}
	pr_push(a, b, 'a');
}
