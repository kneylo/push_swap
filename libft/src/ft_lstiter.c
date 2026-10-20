/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/26 02:32:52 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 14:49:06 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f || !lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/* void	print(void *content)
{
	printf("%s", (char *)content);
}

int	main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	ft_lstiter(ft_lstnew(av[1]), print);
	return (0);
}
 */