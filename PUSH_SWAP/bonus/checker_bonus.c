/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 17:28:32 by bleaf             #+#    #+#             */
/*   Updated: 2022/07/12 00:30:12 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_bonus.h"

static void	clear_both_stack(t_list **a, t_list **b)
{
	ft_clear_stack(a);
	ft_clear_stack(b);
}

int	domore(char *instr, t_list **a, t_list **b)
{
	if (!ft_strncmp(instr, "pa\n", ft_strlen("pa\n")))
		push(b, a);
	else if (!ft_strncmp(instr, "pb\n", ft_strlen("pb\n")))
		push(a, b);
	else if (!ft_strncmp(instr, "ra\n", ft_strlen("ra\n")))
		rlist(a);
	else if (!ft_strncmp(instr, "rb\n", ft_strlen("rb\n")))
		rlist(b);
	else if (!ft_strncmp(instr, "rr\n", ft_strlen("rr\n")))
		rr(a, b);
	else if (!ft_strncmp(instr, "rra\n", ft_strlen("rra\n")))
		rrlist(a);
	else if (!ft_strncmp(instr, "rrb\n", ft_strlen("rrb\n")))
		rrlist(b);
	else if (!ft_strncmp(instr, "rrr\n", ft_strlen("rrr\n")))
		rrr(a, b);
	else
		return (1);
	return (0);
}

void	doinstructions(char *instr, t_list **a, t_list **b)
{
	if (!ft_strncmp(instr, "sa\n", ft_strlen("sa\n")))
		swap(a);
	else if (!ft_strncmp(instr, "sb\n", ft_strlen("sb\n")))
		swap(b);
	else if (!ft_strncmp(instr, "ss\n", ft_strlen("ss\n")))
	{
		swap(a);
		swap(b);
	}
	else if (domore(instr, a, b))
	{
		ft_clear_stack(a);
		free(instr);
		error(b);
	}
	free(instr);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*line;
	int		i;

	i = 1;
	a = NULL;
	b = NULL;
	if (argc < 2)
		exit(0);
	while (i < argc)
		ft_lstadd_back(&a, ft_lstnew(ps_atoi(argv[i++], &a)));
	is_unq_stack(&a);
	line = get_next_line(STDIN_FILENO);
	while (line)
	{
		doinstructions(line, &a, &b);
		line = get_next_line(STDIN_FILENO);
	}
	if (is_sorted(&a) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	clear_both_stack(&a, &b);
	return (0);
}
