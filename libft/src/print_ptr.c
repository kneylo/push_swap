/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:42:39 by mag               #+#    #+#             */
/*   Updated: 2026/10/20 17:46:09 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_ptr(void *ptr)
{
	unsigned long	n;
	int				res;

	n = (unsigned long)ptr;
	if (!n)
		return (ft_putstr_fd("(nil)", 1), 5);
	res = 3;
	ft_putstr_fd("0x", 1);
	putbase(n, "0123456789abcdef");
	while (n >= 16)
	{
		n /= 16;
		res++;
	}
	return (res);
}
