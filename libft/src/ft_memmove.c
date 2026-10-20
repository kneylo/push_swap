/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 23:57:56 by mag               #+#    #+#             */
/*   Updated: 2026/10/11 17:19:27 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (!dst && !src)
		return (NULL);
	if ((unsigned char *)dst < (const unsigned char *)src)
		ft_memcpy(dst, src, len);
	else
	{
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
	}
	return (dst);
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%s", (char *)ft_memmove(av[1], av[2], atoi(av[3])));
	return (0);
}
 */