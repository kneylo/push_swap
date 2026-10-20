/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 19:09:53 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 19:20:45 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((unsigned char *)s)[i] != (unsigned char)c)
		i++;
	if (i < n)
		return ((unsigned char *)s + i);
	return (NULL);
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%s", (char *)ft_memchr(av[1], *av[2], atoi(av[3])));
	return (0);
}
 */