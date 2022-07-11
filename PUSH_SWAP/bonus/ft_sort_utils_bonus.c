/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 18:01:16 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/11 19:56:11 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	is_sorted(t_list **stk)
{
	int		check;
	t_list	*lst;

	lst = *stk;
	if (!*stk)
		return (0);
	check = lst->content;
	while (lst)
	{
		if (check > lst->content)
			return (0);
		else
			check = lst->content;
		lst = lst->next;
	}
	return (1);
}

int	is_unq_stack(t_list	**lst)
{
	t_list	*il;
	t_list	*jl;

	il = *lst;
	while (il)
	{
		jl = il->next;
		while (jl)
		{
			if (il->content == jl->content)
				error(lst);
			jl = jl->next;
		}
		il = il->next;
	}
	return (1);
}
