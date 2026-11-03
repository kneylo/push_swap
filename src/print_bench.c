/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bench.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 17:09:04 by nkreter           #+#    #+#             */
/*   Updated: 2026/11/03 18:08:16 by nkreter          ###   ########.fr       */
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

void	print_bench(t_bench *bench, t_algo strat)
{
	ft_printf("[bench] disorder: %f\n", bench->disorder);
	ft_printf("[bench] strategy: %s\n", print_strategy(strat));
	ft_printf("[bench] total_ops: %d\n", bench->total);
	ft_printf("[bench] sa: %d sb: %d ss: %d pa: %d pb: %d\n", bench->sa, bench->sb, bench->ss, bench->pa, bench->pb);
	ft_printf("[bench] ra: %d rb: %d rr: %d rra: %d rrb: %d rrr %d\n", bench->ra, bench->rb, bench->rr, bench->rra, bench->rrb, bench->rrr);
}	