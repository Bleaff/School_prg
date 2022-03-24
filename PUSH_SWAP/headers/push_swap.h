/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:46:41 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/24 19:18:20 by bleaf            ###   ########.fr       */
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
void	push(t_list **a, t_list **b);
void	rrlist(t_list **stk);
void	rlist(t_list **stk);
void	swap(t_list **lst);
void	rrr(t_list **a, t_list **b);
void	rr(t_list **a, t_list **b);
void	print_elem(int a);
/*
        ***LIST PRINTS OPTIONS***
*/
void	pr_swap(t_list **lst, char liter);
void	pr_rlist(t_list **stk, char liter);
void	pr_rrlist(t_list **stk, char liter);
void	pr_push(t_list **a, t_list **b, char liter);
/*
        ***SORT OPERATIONS***
*/
int		is_sorted(t_list **stk);
int		is_unq_stack(t_list **lst);
/*
        ***PUSH_SWAP UTILS***
*/
void	error(void);
int		ps_atoi(const char *str);
#endif
