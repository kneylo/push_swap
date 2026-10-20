/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 18:10:36 by mag               #+#    #+#             */
/*   Updated: 2026/10/20 17:46:33 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	conversion(char c, va_list *args)
{
	if (c == 'c')
		return (print_char(va_arg(*args, int)));
	else if (c == 's')
		return (print_str(va_arg(*args, char *)));
	else if (c == 'p')
		return (print_ptr(va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (print_int(va_arg(*args, int)));
	else if (c == 'u')
		return (print_unsigned(va_arg(*args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (print_hex(c, va_arg(*args, unsigned int)));
	else if (c == '%')
		return (ft_putchar_fd('%', 1), 1);
	else
		return (ft_putchar_fd('%', 1), ft_putchar_fd(c, 1), 2);
	return (0);
}
