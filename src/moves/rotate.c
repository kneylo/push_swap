/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:29:31 by mag               #+#    #+#             */
/*   Updated: 2026/10/23 04:11:55 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack **stack)
{
	t_stack	*tmp;
	t_stack	*last;

	if (!stack || !*stack || !(*stack)->next)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	last = stack_last(*stack);
	last->next = tmp;
	last->next->next = NULL;
}

void	ra(t_stack **a)
{
	if (!a || !*a || !(*a)->next)
		return ;
	rotate(a);
	ft_printf("ra\n");
}

void	rb(t_stack **b)
{
	if (!b || !*b || !(*b)->next)
		return ;
	rotate(b);
	ft_printf("rb\n");
}

void	rr(t_stack **a, t_stack **b)
{
	if (!a || !b)
		return ;
	if ((!*a || !(*a)->next) && (!*b || !(*b)->next))
		return ;
	rotate(a);
	rotate(b);
	ft_printf("rr\n");
}
