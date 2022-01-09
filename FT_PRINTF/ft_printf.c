/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 23:31:51 by bleaf             #+#    #+#             */
/*   Updated: 2022/01/09 02:08:07 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>
//чтение многих аргументов 
char	*ft_get_type(char *line, va_start ls, char *str_prf)
{
	int		i;
	int		check_box;
	char	correct_sym;

	correct_sym = ft_strdup("cspdiuxX%");
	check_box = 0;
	if (!line || !correct_sym)
		return (NULL);
	i = 0;
	while (line[i])
	{
		if (line[i] == '%')
			check_box++;
		else if (check_box)
		{
			while (correct_sym)
			{
				if (correct_sym == line[i])
					return (&(line[i]));
			}
		}
	}
	return (NULL);
}

int	ft_printf(const char *str, ...)
{
	if (!str)
		return (0);
	
}
