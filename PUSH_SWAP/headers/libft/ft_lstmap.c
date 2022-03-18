/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 04:28:47 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/19 01:32:20 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, int (*f)(int *), void (*del)(int *))
{
	t_list	*new_lst;
	t_list	*lst_elem;
	t_list	*next;

	if (!lst)
		return (NULL);
	new_lst = ft_lstnew(f(&lst->content));
	if (!new_lst)
		return (NULL);
	next = lst->next;
	while (next)
	{
		lst_elem = ft_lstnew(f(&next->content));
		if (!lst_elem)
		{
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, lst_elem);
		next = next->next;
	}
	return (new_lst);
}
