/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   adaptive.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:52:43 by mag               #+#    #+#             */
/*   Updated: 2026/10/26 15:51:49 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static double	compute_disorder(t_stack *a)
{
	double			mistakes;
	double			total_pairs;
	t_stack			*current;
	t_stack			*compare;

	mistakes = 0;
	total_pairs = 0;
	current = a;
	while (current)
	{
		compare = current->next;
		while (compare)
		{
			total_pairs++;
			if (current->data > compare->data)
				mistakes++;
			compare = compare->next;
		}
		current = current->next;
	}
	if (total_pairs == 0)
		return (0.0);
	return (mistakes / total_pairs);
}

void	adaptive(t_stack **a, t_stack **b)
{
	double	disorder;

	disorder = compute_disorder(*a);
	if (disorder < 0.2)
		simple(a, b);
	else if (disorder < 0.5)
		medium(a, b);
	else
		complex(a, b);
}
