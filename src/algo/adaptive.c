/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:52:43 by mag               #+#    #+#             */
/*   Updated: 2026/11/03 15:54:11 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_stack **a, t_stack **b, t_algo *flag_algo, t_bench *bench)
{
	double	disorder;

	disorder = bench->disorder;
	if (disorder < 0.2)
	{
		simple(a, b, bench);
		*flag_algo = SIMPLE;
	}
	else if (disorder < 0.5)
	{
		medium(a, b, bench);
		*flag_algo = MEDIUM;
	}
	else
	{
		complex(a, b, bench);
		*flag_algo = COMPLEX;
	}
}
