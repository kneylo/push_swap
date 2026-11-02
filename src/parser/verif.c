/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   verif.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/29 14:19:02 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 15:30:37 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**get_arg(int ac, char **av)
{
	char	**res;
	int		i;
	int		j;

	i = 1;
	while (ac > 2 && ft_strncmp(av[i], "--", 2) == 0)
		i++;
	res = av + i;
	if (*av[i] == 0)
		return (NULL);
	if (i + 1 == ac)
		return (ft_split(av[i], ' '));
	res = malloc(sizeof(char *) * (ac - i + 1));
	if (!res)
		return (NULL);
	j = 0;
	while (i < ac)
	{
		res[j] = ft_strdup(av[i]);
		if (!res[j])
			return (free_arg(res), NULL);
		res[++j] = NULL;
		i++;
	}
	return (res);
}

static int	is_number(char *str)
{
	int	i;

	i = 0;
	if (str[i] == 45)
		i++;
	if (!str[i])
		return (0);
	while (str[i])
		if (!ft_isdigit(str[i++]))
			return (0);
	return (1);
}

static long	*digit(int ac, char **av, int *len)
{
	char	**tmp;
	long	*res;
	int		i;

	tmp = get_arg(ac, av);
	if (!tmp)
		return (NULL);
	*len = 0;
	while (tmp[*len])
		(*len)++;
	res = malloc(sizeof(long) * *len);
	if (!res)
		return (free_arg(tmp), NULL);
	i = 0;
	while (tmp[i])
	{
		if (!is_number(tmp[i]))
			return (free(res), free_arg(tmp), NULL);
		res[i] = ft_atol(tmp[i]);
		i++;
	}
	return (free_arg(tmp), res);
}

static long	*same(int ac, char **av, int *len)
{
	long	*res;
	int		i;
	int		j;

	i = -1;
	res = digit(ac, av, len);
	if (!res)
		return (NULL);
	while (++i < *len)
	{
		j = i;
		while (--j >= 0)
			if (res[i] == res[j])
				return (free(res), NULL);
		j = i;
		while (++j < *len)
			if (res[i] == res[j])
				return (free(res), NULL);
	}
	return (res);
}

long	*verif(int ac, char **av, int *len)
{
	long	*res;

	if (ac < 2)
		return (NULL);
	res = same(ac, av, len);
	if (!res)
		return (NULL);
	return (res);
}
