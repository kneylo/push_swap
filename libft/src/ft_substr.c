/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 22:50:49 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 14:05:17 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		len = 0;
	else if (len > (ft_strlen(s) - start))
		len = ft_strlen(s) - start;
	res = malloc(sizeof(char) * (len + 1));
	if (!res)
		return (NULL);
	ft_memcpy(res, s + start, len);
	res[len] = 0;
	return (res);
}

/* int	main(int ac, char **av)
{
	char	*res;

	if (ac != 4)
		return (1);
	res = ft_substr(av[1], atoi(av[2]), atoi(av[3]));
	printf("%s", res);
	free (res);
	res = NULL;
	return (0);
}
 */