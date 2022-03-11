NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = 	/src/push_swap.c
HEADERS = /headers/push_swap.h
LIBFT = libft
FTPRINTF = ft_printf
OBJ=$(SRC:.c=.o)
GREEN = \033[1;32m

all : $(NAME)

$(NAME) : libft printf $(OBJ)

		@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L ./LIBFT -lft  -L ./FTPRINTF -lftprintf

		@echo "$(GREEN)Project successfully compiled"


libft:
		@make -C ./headers/libft
printf:
		@make -C ./headers/ft_printf

.PHONY : clean fclean re

clean :
		@make clean -C ./headers/libft
		@make clean -C ./headers/ft_printf
		-rm -f $(OBJ)
		@echo "$(GREEN)All object files are deleted"

fclean : clean
		@make fclean -C ./headers/libft
		@make fclean -C ./headers/ft_printf
		@make clean
		-rm -f $(NAME)
		@echo "$(GREEN)Cleaned everything"

re : fclean all
