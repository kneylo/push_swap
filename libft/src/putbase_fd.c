/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbase_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:23:51 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 04:23:46 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putbase_fd(int fd, unsigned long n, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (n >= (unsigned long)len)
		putbase_fd(fd, n / len, base);
	ft_putchar_fd(base[n % len], fd);
}
