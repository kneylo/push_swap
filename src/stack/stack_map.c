/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:46:43 by mag               #+#    #+#             */
/*   Updated: 2026/10/23 00:08:09 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_map(t_stack *lst, int (*f)(int))
{
	t_stack	*res;
	t_stack	*new;

	if (!lst || !f)
		return (NULL);
	res = NULL;
	while (lst)
	{
		new = stack_new(f(lst->data));
		if (!new)
		{
			stack_clear(&res);
			return (NULL);
		}
		stack_add_back(&res, new);
		lst = lst->next;
	}
	return (res);
}
