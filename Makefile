# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mag <mag@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/11/03 15:55:04 by nkreter           #+#    #+#              #
#    Updated: 2026/11/04 02:37:04 by mag              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIBFT = libft/libft.a

SRC = src/stack/stack_add_back.c \
	src/stack/stack_last.c \
	src/stack/stack_new.c \
	src/stack/stack_size.c \
	src/stack/stack_delone.c \
	src/stack/stack_clear.c \
	src/moves/swap.c \
	src/moves/push.c \
	src/moves/rotate.c \
	src/moves/reverse_rotate.c \
	src/algo/simple.c \
	src/algo/medium.c \
	src/algo/complex.c \
	src/algo/adaptive.c \
	src/parser/verif.c \
	src/parser/parser_utils.c \
	src/parser/parser.c \
	src/disorder.c \
	src/print_bench.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -Ilibft/include -Iinclude

all: $(NAME)
	
$(NAME): $(OBJ) $(LIBFT)
	ar rcs $@ $(OBJ)

$(LIBFT):
	@make -C libft --no-print-directory

exe:
	$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT) -o push_swap

g:
	$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT) -g -o push_swap

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make clean -C libft --no-print-directory

fclean: clean
	rm -f $(NAME)
	@make fclean -C libft --no-print-directory

ffclean: fclean
	rm -f ./push_swap

re: fclean all

.PHONY: all clean fclean re ffclean exe
