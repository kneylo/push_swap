/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/23 16:15:39 by mag               #+#    #+#             */
/*   Updated: 2026/10/26 15:23:10 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple(t_stack **a, t_stack **b)
{
	int		biggest;
	t_stack	*tmp;

	while (*a)
		pb(b, a);
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
			rb(b);
		pa(a, b);
	}
}
