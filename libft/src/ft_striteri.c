/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 13:47:52 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 17:32:03 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* void	print(unsigned int i, char *str)
{
	(void) i;
	printf("%c", str[0]);
}

int	main(int ac, char **av)
{
	char	*res;

	if (ac != 2)
		return (1);
	res = av[1];
	ft_striteri(res, print);
	return (0);
}
 */