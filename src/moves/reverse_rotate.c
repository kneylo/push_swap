/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:13:23 by mag               #+#    #+#             */
/*   Updated: 2026/10/23 03:55:15 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	reverse_rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = stack_last(*stack);
	last = stack_last_prev(*stack);
	last->next = NULL;
	tmp->next = (*stack);
	*stack = tmp;
}

void	rra(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	reverse_rotate(a);
	ft_printf("rra\n");
}

void	rrb(t_stack **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	reverse_rotate(b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **a, t_stack **b)
{
	if (!a || !*a || !b || !*b)
		return ;
	if (!(*a)->next && !(*b)->next)
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	ft_printf("rrr\n");
}
