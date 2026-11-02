/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 13:41:30 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 16:25:15 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*parser(int ac, char **av, t_algo *flag_algo, t_bench *bench)
{
	int		i;
	int		len;
	long	*tab;
	t_stack	*stack;

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
			*flag_algo = flag(av);
	}
	if (*flag_algo == ERR || bench->flag >= 2)
		return (ft_printf("Error\n"), NULL);
	i = 0;
	stack = stack_new(tab[i++]);
	while (i < len)
		stack_add_back(&stack, stack_new(tab[i++]));
	return (stack);
}
