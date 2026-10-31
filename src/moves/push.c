/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 18:48:50 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 19:03:04 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **a, t_stack **b, t_bench *bench)
{
	t_stack	*tmp;

	if (!b || !*b || !a)
		return ;
	tmp = *b;
	*b = (*b)->next;
	tmp->next = *a;
	*a = tmp;
	if (!bench->flag)
		ft_printf("pa\n");
	bench->pa++;
	bench->total++;
}

void	pb(t_stack **b, t_stack **a, t_bench *bench)
{
	t_stack	*tmp;

	if (!a || !*a || !b)
		return ;
	tmp = *a;
	*a = (*a)->next;
	tmp->next = *b;
	*b = tmp;
	if (!bench->flag)
		ft_printf("pb\n");
	bench->pb++;
	bench->total++;
}
