/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:52:43 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 18:08:45 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	adaptive(t_stack **a, t_stack **b, t_bench *bench)
{
	double	disorder;

	disorder = compute_disorder(*a);
	if (disorder < 0.2)
		simple(a, b, bench);
	else if (disorder < 0.5)
		medium(a, b, bench);
	else
		complex(a, b, bench);
}
