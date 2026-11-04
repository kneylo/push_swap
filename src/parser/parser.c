/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:41:30 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 19:01:45 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack	*create_stack_a(int len, long *tab)
{
	t_stack	*stack;
	int		i;

	i = 0;
	stack = stack_new(tab[i++]);
	while (i < len)
		stack_add_back(&stack, stack_new(tab[i++]));
	return (stack);
}

t_stack	*parser(int ac, char **av, t_algo *flag_algo, t_bench *bench)
{
	int		i;
	int		len;
	long	*tab;
	t_stack	*stack;

	if (ac < 2)
		return (NULL);
	len = 0;
	tab = verif(ac, av, &len);
	if (!tab)
		return (ft_printf("Error\n"), NULL);
	i = 0;
	while (ft_strncmp(av[++i], "--", 2) == 0)
	{
		if (ft_strncmp(av[i], "--bench", 8) == 0)
			bench->flag += 1;
		else
			*flag_algo = flag(av[i]);
	}
	if (*flag_algo == ERR || bench->flag >= 2)
		return (ft_printf("Error\n"), free(tab), NULL);
	stack = create_stack_a(len, tab);
	return (free(tab), stack);
}
