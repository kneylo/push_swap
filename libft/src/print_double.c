/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_f.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:42:28 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 04:16:55 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int nb)
{
	int	res;

	res = 1;
	if (nb < 0)
	{
		nb = -nb;
		res++;
	}
	while (nb > 9)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

int	print_double(double n)
{
	int		entier;
	int		decimal;
	int		digit;
	int		res;
	int		i;

	res = 0;
	if (n < 0)
	{
		ft_putchar_fd('-', 1);
		n = -n;
		res++;
	}
	entier = (int) n;
	decimal = (n - entier) * 1000000;
	digit = count_digit(decimal);
	ft_putnbr_fd(entier, 1);
	ft_putchar_fd('.', 1);
	i = -1;
	while (++i < 6 - digit)
		ft_putchar_fd('0', 1);
	ft_putnbr_fd(decimal, 1);
	return (res += count_digit(entier) + 7);
}
