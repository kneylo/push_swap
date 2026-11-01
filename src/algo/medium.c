/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:49:46 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 17:14:06 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	assign_index(t_stack **a)
{
	t_stack	*max;
	t_stack	*current;
	int		i;

	if (!a || !*a)
		return ;
	i = stack_size(*a) - 1;
	while (i >= 0)
	{
		current = *a;
		while (current && current->index != -1)
			current = current->next;
		max = current;
		current = *a;
		while (current)
		{
			if (max->data < current->data && current->index == -1)
				max = current;
			current = current->next;
		}
		max->index = i;
		i--;
	}
}

static int	chunk_size(int size)
{
	int	i;

	i = 1;
	while (i * i < size)
		i++;
	return (i);
}

static void	push_to_b(t_stack **a, t_stack **b, t_bench *bench)
{
	int		size;
	int		max;
	int		push_count;

	size = chunk_size(stack_size(*a));
	max = size;
	while (*a)
	{
		push_count = 0;
		while (*a && push_count < size)
		{
			if ((*a)->index <= max)
			{
				pb(b, a, bench);
				push_count++;
			}
			else
				ra(a, bench);
		}
		max += size;
	}
}

void	medium(t_stack **a, t_stack **b, t_bench *bench)
{
	unsigned int		position;
	t_stack				*current;
	int					i;

	i = stack_size(*a) - 1;
	assign_index(a);
	push_to_b(a, b, bench);
	while (*b && i >= 0)
	{
		position = 0;
		current = *b;
		while (current && current->index != i)
		{
			current = current->next;
			position++;
		}
		if (position <= stack_size(*b) / 2)
			while ((*b)->index != i)
				rb(b, bench);
		else
			while ((*b)->index != i)
				rrb(b, bench);
		pa(a, b, bench);
		i--;
	}
}
