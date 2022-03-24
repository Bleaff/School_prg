/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_moves.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 19:13:23 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 19:16:42 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	pr_push(t_list **a, t_list **b, char liter)
{
    push(a,b);
    write(1, "p", 1);
    write(1, &liter, 1);
    write(1, "\n", 1);
}

void	pr_rrlist(t_list **stk, char liter)
{
    rrlist(stk);
    write(1, "rr", 1);
    write(1, &liter, 1);
    write(1, "\n", 1);
}
void	pr_rlist(t_list **stk, char liter)
{
    rlist(stk);
    write(1, "r", 1);
    write(1, &liter, 1);
    write(1, "\n", 1);
}
void	pr_swap(t_list **lst, char liter)
{
    swap(lst);
    write(1, "s", 1);
    write(1, &liter, 1);
    write(1, "\n", 1);
}
