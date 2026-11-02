/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/04 17:10:32 by nkreter           #+#    #+#             */
/*   Updated: 2026/11/04 17:18:44 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_stack **a, t_stack **b, t_bench *bench)
{
	double	disorder;

	disorder = bench->disorder;
	if (disorder < 0.2)
		simple(a, b, bench);
	else if (disorder < 0.5)
		medium(a, b, bench);
	else
		complex(a, b, bench);
}
