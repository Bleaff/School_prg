/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 04:57:13 by bleaf             #+#    #+#             */
/*   Updated: 2021/11/06 04:11:49 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nb_length(int nb)
{
	long int	i;

	i = 1;
	if (nb < 0)
		nb *= -1;
	while (nb)
	{
		i *= 10;
		nb /= 10;
	}
	i /= 10;
	return (i);
}

static void	print_reg(long int lnb, long int size_reg, int fd)
{
	char	temp;

	while (size_reg)
	{
		temp = 48 + lnb / size_reg % 10;
		write(fd, &temp, 1);
		size_reg /= 10;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	long int	lnb;
	long int	size_reg;

	size_reg = get_nb_length(n);
	if (n == 0)
	{
		write(fd, "0", 1);
		return ;
	}
	lnb = n;
	if (n < 0)
	{
		lnb *= -1;
		write (fd, "-", 1);
	}
	print_reg(lnb, size_reg, fd);
}
