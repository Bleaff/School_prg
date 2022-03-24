/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:46:41 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 10:37:13 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
/*
        ***INCLUDES***
*/
# include "./libft/libft.h"
# include "./ft_printf/ft_printf.h"
# include <limits.h>
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
/*
        ***PUSH_SWAP UTILS***
*/
int	ps_atoi(const char *str);
#endif
