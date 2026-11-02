/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 18:49:27 by nkreter           #+#    #+#             */
/*   Updated: 2026/11/02 18:16:49 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	indexing(t_stack *a)
{
	int		i;
	t_stack	*min;
	t_stack	*current;

	i = 0;
	while (i != (int)stack_size(a))
	{
		current = a;
		min = NULL;
		while (current)
		{
			if (current->index == -1)
			{
				if (!min || current->data < min ->data)
					min = current;
			}
			current = current->next;
		}
		if (min)
			min->index = i;
		i++;
	}
}

int	find_max_bits(int stack_size)
{
	int	max_bits;

	max_bits = 0;
	while ((stack_size >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	complex(t_stack **a, t_stack **b, t_bench *bench)
{
	int	bit;
	int	max_bits;
	int	i;
	int	size;

	bit = 0;
	size = stack_size(*a);
	max_bits = find_max_bits(size - 1);
	indexing(*a);
	while (bit < max_bits)
	{
		i = 0;
		while (i < size)
		{
			if ((((*a)->index >> bit) & 1) == 0)
				pb(a, b, bench);
			else
				ra(a, bench);
			i++;
		}
		while (*b)
			pa(a, b, bench);
		bit++;
	}
}
