/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_clear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 23:45:08 by mag               #+#    #+#             */
/*   Updated: 2026/10/22 18:28:40 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_clear(t_stack **lst)
{
	t_stack	*tmp;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)->next;
		stack_delone(*lst);
		*lst = tmp;
	}
}

/* void	del(void *content)
{
	free(content);
}

void	print(t_list **lst)
{
	t_list *tmp;

	tmp = *lst;
	while (tmp)
	{
		printf("%s", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("\n");
}
int	main(int ac, char **av)
{
	t_list	*lst;
	int		i;

	if (ac < 2)
		return (1);
	i = 1;
	lst = NULL;
	while (i < ac)
	{
		ft_lstadd_back(&lst, ft_lstnew(ft_strdup(av[i])));
		i++;
	}
	print(&lst);
	ft_lstclear(&lst, del);
	if (!lst)
		printf("(null)");
	return (0);
}
 */