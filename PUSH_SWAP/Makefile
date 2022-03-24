NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = 	./src/push_swap.c	./src/push_swap_moves.c\
		./src/push_swap_moves_combined.c ./src/ft_sort_utils.c\
		./src/ft_utils.c ./src/ft_print_moves\
HEADERS = ./headers
LIBFT = libft
FTPRINTF = ft_printf
OBJ=$(SRC:.c=.o)
GREEN = \033[1;32m

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : libft printf $(OBJ)

		@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L ./headers/libft -lft  -L ./headers/ft_printf -lftprintf

		@echo "$(GREEN)Project successfully compiled"


libft:
		@make bonus -C ./headers/libft
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
