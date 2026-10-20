/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 23:45:08 by mag               #+#    #+#             */
/*   Updated: 2026/10/12 13:35:02 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!del)
		return ;
	tmp = *lst;
	while (tmp)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
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