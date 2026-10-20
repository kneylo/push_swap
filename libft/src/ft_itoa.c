/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 15:05:14 by mag               #+#    #+#             */
/*   Updated: 2026/10/11 16:52:12 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	res;

	if (n == 0)
		return (1);
	res = 0;
	if (n < 0)
		res++;
	while (n)
	{
		n /= 10;
		res++;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		j;
	long	ln;

	ln = (long) n;
	i = count_digits(ln);
	j = 0;
	res = malloc(sizeof(char) * i + 1);
	if (!res)
		return (NULL);
	res[i] = 0;
	if (ln < 0)
	{
		ln = -ln;
		res[0] = '-';
		j++;
	}
	while (i > j)
	{
		res[i - 1] = (ln % 10) + 48;
		ln /= 10;
		i--;
	}
	return (res);
}

/* int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("%s", ft_itoa(atoi(av[1])));
	return (0);
}
 */