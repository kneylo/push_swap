/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:15:39 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 20:15:32 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	small_stack(t_stack **a, t_bench *bench)
{
	int	biggest;
	t_stack *tmp;

	tmp = *a;
	biggest = tmp->data;
	ft_printf("%d\n", biggest);
	while (tmp)
	{
		if (biggest < tmp->data)
			biggest = tmp->data;
		tmp = tmp->next;
	}
	ft_printf("%d\n", biggest);
	tmp = *a;
	if (biggest == tmp->data)
		ra(a, bench);
	else if (biggest == tmp->next->data)
		rra(a, bench);
	if (tmp->data > tmp->next->data)
		sa(a, bench);
}

void	simple(t_stack **a, t_stack **b, t_bench *bench)
{
	int		biggest;
	t_stack	*tmp;

	if (stack_size(*a) == 3)
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
