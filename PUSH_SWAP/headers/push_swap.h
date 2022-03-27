/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:46:41 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/27 22:00:14 by bleaf            ###   ########.fr       */
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
void	sort2(t_list **lst, char liter);
void	sort3(t_list **a, char liter);
void	sort6(t_list **a, t_list **b);
void	get_sort(t_list **a, t_list **b);
void	algo_sorting(t_list **a, t_list **b, t_list *best);
/*
        ***SORTING MOVES***
*/
void	both_top(int a_s, int b_s, t_list **a, t_list **b);
void	both_bottom(int a_s, int b_s, t_list **a, t_list **b);
void	at_bb(int a_s, int b_s, t_list **a, t_list **b);
void	ab_bt(int a_s, int b_s, t_list **a, t_list **b);
/*
        ***PUSH_SWAP UTILS***
*/
void	error(void);
int		min(int a, int b);
int		max(int a, int b);
int		ps_atoi(const char *str);
int		find_max(t_list **a);
int		find_min(t_list **a);
int		get_pos_bottom(t_list **a, int con);
int		get_pos_top(t_list **a, int con);
void	min_on_top(t_list **a);
t_list	*find_best(t_list **a, t_list **b);
int		way_size(t_list **a, t_list **b, int elem);
void	ft_clear_stack(t_list **a);
t_list	*find_min_elem(t_list **a);
t_list	*find_pos(t_list **a, int con);

#endif
