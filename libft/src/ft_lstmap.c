/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 17:46:43 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 14:35:49 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*new;

	if (!lst || !f || !del)
		return (NULL);
	res = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		ft_lstadd_back(&res, new);
		lst = lst->next;
	}
	return (res);
}

/* void	*print(void *content)
{
	printf("%s", (char *)content);
	return (content);
}

void	del(void *content)
{
	free(content);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_lstmap(ft_lstnew(av[1]), print, del);
	return (0);
}
 */