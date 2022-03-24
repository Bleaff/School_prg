/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:10:34 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/25 00:21:54 by bleaf            ###   ########.fr       */
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
	else if (ft_lstsize(a) <= 3)
		sort3(&a, 'a');
	else if (ft_lstsize(a) <= 6)
		sort6(&a, &b);
	// ft_printf("List a: ");
	// ft_lstiter(a, print_elem);
	// ft_printf("\nList b: ");
	// ft_lstiter(b, print_elem);
	// ft_printf("sorted? \n%d\n", is_sorted(&a));
	return (0);
}
