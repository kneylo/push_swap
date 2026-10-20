# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mag <mag@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/19 20:10:09 by mag               #+#    #+#              #
#    Updated: 2026/10/20 18:08:05 by mag              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

LIBFT_SRC = libft/src/ft_isalpha.c \
	libft/src/ft_isdigit.c \
	libft/src/ft_isalnum.c \
	libft/src/ft_isascii.c \
	libft/src/ft_isprint.c \
	libft/src/ft_strlen.c \
	libft/src/ft_memset.c \
	libft/src/ft_bzero.c \
	libft/src/ft_memcpy.c \
	libft/src/ft_memmove.c \
	libft/src/ft_strlcpy.c \
	libft/src/ft_strlcat.c \
	libft/src/ft_toupper.c \
	libft/src/ft_tolower.c \
	libft/src/ft_strchr.c \
	libft/src/ft_strrchr.c \
	libft/src/ft_strncmp.c \
	libft/src/ft_memchr.c \
	libft/src/ft_memcmp.c \
	libft/src/ft_strnstr.c \
	libft/src/ft_atoi.c \
	libft/src/ft_calloc.c \
	libft/src/ft_strdup.c \
	libft/src/ft_substr.c \
	libft/src/ft_strjoin.c \
	libft/src/ft_strtrim.c \
	libft/src/ft_split.c \
	libft/src/ft_itoa.c \
	libft/src/ft_strmapi.c \
	libft/src/ft_striteri.c \
	libft/src/ft_putchar_fd.c \
	libft/src/ft_putstr_fd.c \
	libft/src/ft_putendl_fd.c \
	libft/src/ft_putnbr_fd.c \
	libft/src/ft_lstnew.c \
	libft/src/ft_lstadd_front.c \
	libft/src/ft_lstsize.c \
	libft/src/ft_lstlast.c \
	libft/src/ft_lstadd_back.c \
	libft/src/ft_lstdelone.c \
	libft/src/ft_lstclear.c \
	libft/src/ft_lstiter.c \
	libft/src/ft_lstmap.c \
	libft/src/conversion.c \
	libft/src/ft_printf.c \
	libft/src/putbase.c \
	libft/src/print_char.c \
	libft/src/print_str.c \
	libft/src/print_int.c \
	libft/src/print_unsigned.c \
	libft/src/print_ptr.c \
	libft/src/print_hex.c \

SRC = src/push_swap.c \
	

OBJ = $(SRC:.c=.o) $(LIBFT_SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Werror -Wextra -Ilibft

all: $(NAME)
	
$(NAME): $(OBJ)
	ar rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
