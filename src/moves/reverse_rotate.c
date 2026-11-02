/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 22:13:23 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 11:22:12 by nkreter          ###   ########.fr       */
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

void	rra(t_stack **a, t_bench *bench)
{
	if (!a || !*a || !(*a)->next)
		return ;
	reverse_rotate(a);
	if (!bench->flag)
		ft_printf("rra\n");
	bench->rra++;
	bench->total++;
}

void	rrb(t_stack **b, t_bench *bench)
{
	if (!b || !*b || !(*b)->next)
		return ;
	reverse_rotate(b);
	if (!bench->flag)
		ft_printf("rrb\n");
	bench->rrb++;
	bench->total++;
}

void	rrr(t_stack **a, t_stack **b, t_bench *bench)
{
	if (!a || !*a || !b || !*b)
		return ;
	if (!(*a)->next && !(*b)->next)
		return ;
	reverse_rotate(a);
	reverse_rotate(b);
	if (!bench->flag)
		ft_printf("rrr\n");
	bench->rrr++;
	bench->total++;
}
