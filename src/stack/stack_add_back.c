/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_add_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 19:24:07 by mag               #+#    #+#             */
/*   Updated: 2026/10/21 22:48:13 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_add_back(t_stack **lst, t_stack *new)
{
	t_stack	*tmp;

	if (!(*lst) || !new)
	{
		if (!(*lst))
			*lst = new;
		return ;
	}
	tmp = stack_last(*lst);
	tmp->next = new;
}
