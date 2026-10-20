/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/14 19:47:05 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 16:28:16 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[i] = 0;
	return (ft_strlen(src));
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%zu\n", ft_strlcpy(av[1], av[2], atoi(av[3])));
	printf("%s", av[1]);
	return (0);
}
 */