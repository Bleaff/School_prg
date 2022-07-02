#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <stdlib.h>
# include "libs/ft_printf/ft_printf.h"
# include "libs/libft/libft.h"
int validate(char **args);
void exit_with_error(int id_error);


#endif