/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:02:05 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 19:39:42 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack **stack)
{
	int	tmp;

	if (!*stack || !(*stack)->next)
		return ;
	tmp = (*stack)->data;
	(*stack)->data = (*stack)->next->data;
	(*stack)->next->data = tmp;
}

void	sa(t_stack **a, t_bench *bench)
{
	if (!*a || !(*a)->next)
		return ;
	swap(a);
	if (!bench->flag)
		ft_printf("sa\n");
	bench->sa++;
	bench->total++;
}

void	sb(t_stack **b, t_bench *bench)
{
	if (!*b || !(*b)->next)
		return ;
	swap(b);
	if (!bench->flag)
		ft_printf("sb\n");
	bench->sb++;
	bench->total++;
}

void	ss(t_stack **a, t_stack **b, t_bench *bench)
{
	if ((!*a || !(*a)->next) && (!*b || !(*b)->next))
		return ;
	swap(a);
	swap(b);
	if (!bench->flag)
		ft_printf("ss\n");
	bench->ss++;
	bench->total++;
}
