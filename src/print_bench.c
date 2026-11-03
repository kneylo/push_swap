/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:09:04 by nkreter           #+#    #+#             */
/*   Updated: 2026/11/04 17:21:35 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	*print_strategy(t_algo strat)
{
	if (strat == SIMPLE)
		return ("Simple / O(n²)");
	else if (strat == MEDIUM)
		return ("Medium / O(n√n)");
	else if (strat == COMPLEX)
		return ("Complex / O(n log n)");
	else if (strat == ADAPTIVE)
		return ("Adaptive / O(n√n)");
	return (NULL);
}

static char	*print_disorder(double nb)
{
	char	*res;
	char	*tmp;
	int		nb_int;

	res = malloc(7);
	nb_int = nb * 10000;
	tmp = ft_itoa(nb_int);
	res[0] = tmp[0];
	res[1] = tmp[1];
	res[2] = '.';
	res[3] = tmp[2];
	res[4] = tmp[3];
	res[5] = '%';
	res[6] = 0;
	free (tmp);
	return (res);
}

void	print_bench(t_bench *bench, t_algo strat)
{
	char	*disorder;

	disorder = print_disorder(bench->disorder);
	ft_printf_fd(2, "[bench] disorder: %s\n", disorder);
	free(disorder);
	ft_printf_fd(2, "[bench] strategy: %s\n", print_strategy(strat));
	ft_printf_fd(2, "[bench] total_ops: %d\n", bench->total);
	ft_printf_fd(2, "[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n",
		bench->sa, bench->sb, bench->ss, bench->pa, bench->pb);
	ft_printf_fd(2, "[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr %d\n",
		bench->ra, bench->rb, bench->rr, bench->rra, bench->rrb, bench->rrr);
}
