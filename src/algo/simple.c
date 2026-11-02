/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:15:39 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 18:48:03 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	small_stack(t_stack **a, t_bench *bench)
{
	if (a->data > a->next->data)
		sa(a, bench);
}

void	simple(t_stack **a, t_stack **b, t_bench *bench)
{
	int		biggest;
	t_stack	*tmp;

	if (stack_size(a) <= 3)
	{
		small_stack(a, bench);
		return ;
	}
	while (*a)
		pb(b, a, bench);
	while (*b)
	{
		tmp = *b;
		biggest = tmp->data;
		while (tmp->next)
		{
			if (biggest < tmp->next->data)
				biggest = tmp->next->data;
			tmp = tmp->next;
		}
		while (biggest != (*b)->data)
			rb(b, bench);
		pa(a, b, bench);
	}
}
