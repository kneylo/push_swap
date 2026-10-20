/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 01:46:56 by mag               #+#    #+#             */
/*   Updated: 2026/10/20 17:47:26 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printf(const char *str, ...)
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
			res += conversion(str[i + 1], &args);
			i += 2;
		}
		else
		{
			ft_putchar_fd(str[i++], 1);
			res++;
		}
	}
	va_end(args);
	return (res);
}
