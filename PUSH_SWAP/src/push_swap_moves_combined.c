/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves_combined.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:20:38 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 19:19:25 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	rr(t_list **a, t_list **b)
{
	rlist(a);
	rlist(b);
	write(1, "rr\n", 3);
}

void	rrr(t_list **a, t_list **b)
{
	rrlist(a);
	rrlist(b);
	write(1, "rrr\n", 4);
}
