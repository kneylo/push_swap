/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 20:42:13 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 04:22:17 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_hex_fd(int fd, char c, unsigned int n)
{
	int	res;

	if (c == 'x')
		putbase_fd(fd, n, "0123456789abcdef");
	else
		putbase_fd(fd, n, "0123456789ABCDEF");
	res = 1;
	while (n >= 16)
	{
		n /= 16;
		res++;
	}
	return (res);
}
