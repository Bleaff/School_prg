/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 03:32:23 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/11 03:36:26 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*iter;

	if (!lst)
		return (0);
	i = 0;
	iter = lst;
	while (iter)
	{
		iter = iter->next;
		i++;
	}
	return (i);
}
