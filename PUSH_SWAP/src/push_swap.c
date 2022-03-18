/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:10:34 by bleaf             #+#    #+#             */
/*   Updated: 2022/03/18 23:33:24 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

int	main(int argc, char *argv[])
{
	t_list *a = NULL;
	t_list *b = NULL;
	int *new = NULL;
	if(argc == 1)
		return(-1);
	while (--argc)
	{
		*new = ft_atoi(argv[argc]);
		ft_lstadd_back(&a, ft_lstnew((void *)&new));
	}
	for (size_t i = 0; i < 3; i++)
	{
		push(&a,&b);
	}
	ft_printf("List a: ");
	ft_lstiter(a, print_elem);
	ft_printf("\nList b: ");
	ft_lstiter(b, print_elem);
	return(0);
}
