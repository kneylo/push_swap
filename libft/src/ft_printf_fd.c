/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 01:46:56 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 04:26:00 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf_fd(int fd, const char *str, ...)
{
	int		i;
	int		res;
	va_list	args;

	i = 0;
	res = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			res += conversion_fd(fd, str[i + 1], &args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i++], fd);
			res++;
		}
	}
	va_end(args);
	return (res);
}
