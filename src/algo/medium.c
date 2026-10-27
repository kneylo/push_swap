/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   medium.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 20:49:46 by mag               #+#    #+#             */
/*   Updated: 2026/10/26 15:23:01 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	init_index(t_stack **a)
{
	t_stack	*current;

	if (!a || !*a)
		return ;
	current = *a;
	while (current)
	{
		current->index = -1;
		current = current->next;
	}
}

static void	assign_index(t_stack **a)
{
	t_stack	*max;
	t_stack	*current;
	int		i;

	if (!a || !*a)
		return ;
	i = stack_size(*a) - 1;
	init_index(a);
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

static void	push_to_b(t_stack **a, t_stack **b)
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
				pb(b, a);
				push_count++;
			}
			else
				ra(a);
		}
		max += size;
	}
}

void	medium(t_stack **a, t_stack **b)
{
	unsigned int		position;
	t_stack				*current;
	int					i;

	i = stack_size(*a) - 1;
	assign_index(a);
	push_to_b(a, b);
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
				rb(b);
		else
			while ((*b)->index != i)
				rrb(b);
		pa(a, b);
		i--;
	}
}
