/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 21:04:56 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 16:13:29 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	i;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/* char print(unsigned int d,char c)
{
	(void) d;
	printf("%c", c);
	return (c);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_strmapi(av[1], print);
	return (0);
}
 */