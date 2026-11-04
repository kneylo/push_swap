/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:42:39 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 04:22:49 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_ptr_fd(int fd, void *ptr)
{
	unsigned long	n;
	int				res;

	n = (unsigned long)ptr;
	if (!n)
		return (ft_putstr_fd("(nil)", fd), 5);
	res = 3;
	ft_putstr_fd("0x", fd);
	putbase(n, "0123456789abcdef");
	while (n >= 16)
	{
		n /= 16;
		res++;
	}
	return (res);
}
