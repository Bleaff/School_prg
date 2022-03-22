/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:46:41 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/22 18:49:28 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
/*
        ***INCLUDES***
*/
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
/*
        ***LIST OPTIONS***
*/
void	ft_push(t_list **a, t_list **b);
void	ft_rrlist(t_list **stk);
void	ft_rlist(t_list **stk);
void	ft_swaplist(t_list **lst);
void	ft_rrr(t_list **a, t_list **b);
void	ft_rr(t_list **a, t_list **b);
void	print_elem(int a);
/*
        ***SORT OPERATIONS***
*/
int	is_sorted(t_list **stk);
int	is_unq_stack(t_list **lst);
#endif
