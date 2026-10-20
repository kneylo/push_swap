/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putbase.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/01 22:23:51 by mag               #+#    #+#             */
/*   Updated: 2026/10/20 17:45:54 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	putbase(unsigned long n, char *base)
{
	int	len;

	len = ft_strlen(base);
	if (n >= (unsigned long)len)
		putbase(n / len, base);
	ft_putchar_fd(base[n % len], 1);
}
