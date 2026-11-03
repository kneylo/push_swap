/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:18:15 by mag               #+#    #+#             */
/*   Updated: 2026/11/03 14:33:22 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	res;

	res = (long)n;
	if (res < 0)
	{
		ft_putchar_fd('-', fd);
		res = -res;
	}
	if (res <= 9 && res >= 0)
	{
		res += 48;
		ft_putchar_fd(res, fd);
	}
	else
	{
		ft_putnbr_fd(res / 10, fd);
		ft_putnbr_fd(res % 10, fd);
	}
}
