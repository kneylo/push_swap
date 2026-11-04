/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:10:36 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 04:39:24 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	conversion_fd(int fd, char c, va_list *args)
{
	if (c == 'c')
		return (print_char_fd(fd, va_arg(*args, int)));
	else if (c == 's')
		return (print_str_fd(fd, va_arg(*args, char *)));
	else if (c == 'p')
		return (print_ptr_fd(fd, va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (print_int_fd(fd, va_arg(*args, int)));
	else if (c == 'u')
		return (print_unsigned_fd(fd, va_arg(*args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (print_hex_fd(fd, c, va_arg(*args, unsigned int)));
	else if (c == 'f')
		return (print_double_fd(fd, va_arg(*args, double)));
	else if (c == '%')
		return (ft_putchar_fd('%', fd), 1);
	else
		return (ft_putchar_fd('%', fd), ft_putchar_fd(c, fd), 2);
	return (0);
}
