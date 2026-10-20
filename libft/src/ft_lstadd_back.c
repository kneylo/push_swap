/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 19:24:07 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 16:12:15 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!(*lst) || !new)
	{
		if (!(*lst))
			*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}

/* int	main(int ac, char **av)
{
	t_list	*lst;
	int		i;

	if (ac < 2)
		return (1);
	i = 1;
	while (i < ac)
	{
		ft_lstadd_back(&lst, ft_lstnew(av[i]));
		i++;
	}
	while (lst)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}
	return (0);
}
 */