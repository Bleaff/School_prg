/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:10:34 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/27 21:53:21 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*a;
	t_list	*b;
	int		i;

	b = NULL;
	a = NULL;
	i = 1;
	if (argc == 1)
		return (-1);
	while (i < argc)
	{
		ft_lstadd_back(&a, ft_lstnew(ps_atoi(argv[i++])));
	}
	if (is_sorted(&a) && is_unq_stack(&a))
		return (0);
	get_sort(&a, &b);
	ft_clear_stack(&a);
	return (0);
}
