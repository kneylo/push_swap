/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 22:39:48 by mag               #+#    #+#             */
/*   Updated: 2026/10/20 22:30:52 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}

/* void	del(void *content)
{
	free(content);
}

int	main(int ac, char **av)
{
	t_list	*node;

	if (ac != 2)
		return (1);
	node = ft_lstnew(ft_strdup(av[1]));
	printf("%s\n", (char *)node->content);
	ft_lstdelone(node, del);
	printf("%s", (char *)node->content);
	return (0);
}
 */