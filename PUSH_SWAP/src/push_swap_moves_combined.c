/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_moves_combined.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 17:20:38 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/22 17:27:09 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	ft_rr(t_list **a, t_list **b)
{
	ft_rlist(a);
	ft_rlist(b);
	write(1,"rr\n",3);
}
void	ft_rrr(t_list **a, t_list **b)
{
	ft_rrlist(a);
	ft_rrlist(b);
	write(1,"rrr\n",4);
}