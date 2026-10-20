/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:50:50 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 14:47:02 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/* int	main(int ac, char **av)
{
	t_list	*lst;
	int		i;

	if (ac < 2)
		return (1);
	lst = NULL;
	i = 1;
	while (i < atoi(av[1]))
	{
		ft_lstadd_back(&lst, ft_lstnew(av[i]));
		i++;
	}
	printf("%s", (char *)ft_lstlast(lst));
	return (0);
}
 */