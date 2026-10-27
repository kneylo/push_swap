# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mag <mag@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/19 20:10:09 by mag               #+#    #+#              #
#    Updated: 2026/10/26 14:16:12 by mag              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIBFT = libft/libft.a

SRC = src/stack/stack_add_back.c \
	src/stack/stack_add_front.c \
	src/stack/stack_clear.c \
	src/stack/stack_delone.c \
	src/stack/stack_iter.c \
	src/stack/stack_last.c \
	src/stack/stack_map.c \
	src/stack/stack_new.c \
	src/stack/stack_size.c \
	src/moves/swap.c \
	src/moves/push.c \
	src/moves/rotate.c \
	src/moves/reverse_rotate.c \
	src/algo/simple.c \
	src/algo/medium.c \
	src/algo/adaptive.c \
	

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -Ilibft/include -Iinclude

all: $(NAME)
	
$(NAME): $(OBJ) $(LIBFT)
	ar rcs $@ $(OBJ)

$(LIBFT):
	@make -C libft --no-print-directory

exe:
	$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT) -o a.out

g:
	$(CC) $(CFLAGS) main.c $(NAME) $(LIBFT) -g -o a.out

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make clean -C libft --no-print-directory

fclean: clean
	rm -f $(NAME)
	@make fclean -C libft --no-print-directory

ffclean: fclean
	rm -f a.out

re: fclean all

.PHONY: all clean fclean re ffclean exe
