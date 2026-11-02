/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 20:29:31 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 11:23:48 by nkreter          ###   ########.fr       */
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

void	ra(t_stack **a, t_bench *bench)
{
	if (!a || !*a || !(*a)->next)
		return ;
	rotate(a);
	if (!bench->flag)
		ft_printf("ra\n");
	bench->ra++;
	bench->total++;
}

void	rb(t_stack **b, t_bench *bench)
{
	if (!b || !*b || !(*b)->next)
		return ;
	rotate(b);
	if (!bench->flag)
		ft_printf("rb\n");
	bench->rb++;
	bench->total++;
}

void	rr(t_stack **a, t_stack **b, t_bench *bench)
{
	if (!a || !b)
		return ;
	if ((!*a || !(*a)->next) && (!*b || !(*b)->next))
		return ;
	rotate(a);
	rotate(b);
	if (!bench->flag)
		ft_printf("rr\n");
	bench->rr++;
	bench->total++;
}
