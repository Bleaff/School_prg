NAME = push_swap
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRC = 	./src/ft_print_moves.c ./src/ft_sort_utils.c ./src/ft_sorting_moves.c\
		./src/ft_utils.c ./src/ft_utils2.c ./src/ps_sort_algo.c ./src/ps_sort_start.c\
		./src/push_swap_moves_combined.c ./src/push_swap_moves.c\
		./src/push_swap.c

SRC_BONUS = ./bonus/checker_bonus.c ./bonus/ft_sort_utils_bonus.c\
			./bonus/ft_utils_bonus.c ./bonus/ft_utils2_bonus.c ./bonus/push_swap_moves_bonus.c\
			./bonus/push_swap_moves_combined_bonus.c ./bonus/get_next_line_utils.c \
			./bonus/get_next_line.c

HEADERS =	./headers/push_swap.h

B_HEADERS = ./bonus/push_swap_bonus.h
LIBFT = libft
FTPRINTF = ft_printf
OBJ=$(SRC:.c=.o)
OBJ_BONUS=$(SRC_BONUS:.c=.o)
GREEN = \033[1;32m

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

all : $(NAME)

$(NAME) : libft printf $(OBJ)

		@$(CC) $(CFLAGS) $(SRC) -o $(NAME) -I $(HEADERS) -L ./headers/libft -lft  -L ./headers/ft_printf -lftprintf

		@echo "$(GREEN)Project successfully compiled"

bonus: libft printf $(OBJ_BONUS)
		$(CC) $(CFLAGS) $(SRC_BONUS) -o checker -I $(B_HEADERS) -L ./headers/libft -lft  -L ./headers/ft_printf -lftprintf


libft:
		@make bonus -C ./headers/libft
printf:
		@make -C ./headers/ft_printf

.PHONY : clean fclean re

clean :
		@make clean -C ./headers/libft
		@make clean -C ./headers/ft_printf
		-rm -f $(OBJ)
		-rm -f $(OBJ_BONUS)
		@echo "$(GREEN)All object files are deleted"

fclean : clean
		@make fclean -C ./headers/libft
		@make fclean -C ./headers/ft_printf
		@make clean
		-rm -f $(NAME)
		-rm -f $(checker)
		@echo "$(GREEN)Cleaned everything"

re : fclean all
