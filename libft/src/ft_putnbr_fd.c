/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 16:18:15 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 18:35:13 by mag              ###   ########.fr       */
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

/* int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}
 */