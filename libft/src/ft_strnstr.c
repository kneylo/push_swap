/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/17 18:19:03 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 14:20:13 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		while ((i + j) < len && haystack[i + j] == needle[j])
		{
			j++;
			if (needle[j] == 0)
				return ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}

/* int	main(int ac, char **av)
{
	if (ac != 4)
		return (1);
	printf("%s", ft_strnstr(av[1], av[2], atoi(av[3])));
	return (0);
}
 */