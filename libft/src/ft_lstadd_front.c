/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/24 23:32:43 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 16:14:10 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst && !new)
		return ;
	new->next = *lst;
	*lst = new;
}

/* int	main(int ac, char **av)
{
	t_list	*lst;
	int		i;

	if (ac < 2)
		return (1);
	i = 1;
	lst = ft_lstnew(av[i]);
	i++;
	while (i < ac - 1)
	{
		ft_lstadd_back(&lst, ft_lstnew(av[i]));
		i++;
	}
	ft_lstadd_front(&lst, ft_lstnew(av[i]));
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
 */