# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mag <mag@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/19 20:10:09 by mag               #+#    #+#              #
#    Updated: 2026/10/21 17:38:54 by mag              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIBFT = libft/libft.a

SRC = src/push_swap.c \

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -Ilibft/include -Iinclude

all: $(NAME)
	
$(NAME): $(OBJ) $(LIBFT)
	mkdir -p obj_tmp
	cd obj_tmp && ar -x ../$(LIBFT)
	ar rcs $@ $(OBJ) obj_tmp/*.o
	rm -rf obj_tmp

$(LIBFT):
	@make -C libft --no-print-directory

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	@make clean -C libft --no-print-directory

fclean: clean
	rm -f $(NAME)
	@make fclean -C libft --no-print-directory

re: fclean all

.PHONY: all clean fclean re
