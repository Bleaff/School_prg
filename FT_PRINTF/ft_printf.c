/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleaf <bleaf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 23:31:51 by bleaf             #+#    #+#             */
/*   Updated: 2022/01/11 02:54:53 by bleaf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdarg.h>

// void	ft_get_argument(va_list list, char descr)
// {
// 	if (!list || descr <= 0)
// 		return (NULL);
// 	if (descr == 'c')
// 		return 
// 	if (descr == 's')
// 		return 
// 	if (descr == 'p')
// 		return 
// 	if (descr == 'd')
// 		return 
// 	if (descr == 'i')
// 		return 
// 	if (descr == 'u')
// 		return 
// 	if (descr == 'x')
// 		return 
// 	if (descr == 'X')
// 		return 
// 	if (descr == '%')
// 		return ('%');
	
// }

int	ft_valid_ch(int ch)
{
	char	*correct_sym;
	
	correct_sym = ft_strdup("cspdiuxX%");
	if (!correct_sym)
		return (-1);
	while (correct_sym)
	{
		if (*correct_sym == (char) ch)
		{
			free(correct_sym);
			return (1);	
		}
		correct_sym++;
	}
	free(correct_sym);
	return (0);
}
//to do 
char	*ft_change_sym_to_str(char *line, char *arg, int pos_line)
{
	char	*sub_line;

	
	sub_line = ft_substr(line, 0, pos_line - 1);
	if (!line || !arg || !pos_line || !sub_line)
		return (NULL);
	
}

char	*ft_get_type(char *line, va_list ls, char *str_prf)
{
	int		i;
	int		check_box;
	char	correct_sym;

	check_box = -1;
	if (!line)
		return (NULL);
	i = 0;
	while (line[i])
	{
		if (line[i] == '%' && check_box == -1)
			check_box = i;
		else if (check_box != -1 && ft_valid_ch(line[i]) == 1)
		{
			ft_change_sym_to_str(line, va_arg(ls,))
		}
	}
	return (NULL);
}

int	ft_printf(const char *str, ...)
{
	if (!str)
		return ;
	
}
