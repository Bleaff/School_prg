/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:46:41 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/12 00:27:48 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H
/*
        ***INCLUDES***
*/
# include "../headers/libft/libft.h"
# include "../headers/ft_printf/ft_printf.h"
# include "./get_next_line.h"
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
/*
        ***SORT OPERATIONS***
*/
int		is_sorted(t_list **stk);
int		is_unq_stack(t_list **lst);
/*
        ***PUSH_SWAP UTILS***
*/
void	error(t_list **a);
int		ps_atoi(const char *str, t_list **a);
void	ft_clear_stack(t_list **a);
char	*get_next_line(int fd);

#endif
