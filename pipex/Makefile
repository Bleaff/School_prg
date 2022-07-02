NAME = pipex
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC 			= ./src/Check_fork.c

HEADERS 		= ./headers/
LIBFT 			= libft
FTPRINTF		= ft_printf
OBJS			= $(SRCS:.c=.o)
GREEN 			= \033[1;32m

%.o:			%.c $(HEADER)
				$(CC) $(CFLAGS) -c $< -o $@

all : $(NAME)

$(NAME) : libft printf $(OBJ)

		@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L ./headers/libs/libft -lft  -L ./headers/libs/ft_printf -lftprintf

		@echo "$(GREEN)Project successfully compiled"


libft:
		@make bonus -C ./headers/libs/libft
printf:
		@make -C ./headers/libs/ft_printf

.PHONY : clean fclean re

clean :
		@make clean -C ./headers/libs/libft
		@make clean -C ./headers/libs/ft_printf
		-rm -f $(OBJ)
		@echo "$(GREEN)All object files are deleted"

fclean : clean
		@make fclean -C ./headers/libs/libft
		@make fclean -C ./headers/libs/ft_printf
		@make clean
		-rm -f $(NAME)
		@echo "$(GREEN)Cleaned everything"

re : fclean all
