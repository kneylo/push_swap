/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/25 18:30:38 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 15:08:22 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	res;

	res = 0;
	while (lst)
	{
		res++;
		lst = lst->next;
	}
	return (res);
}

/* int	main(int ac, char **av)
{
	t_list	*lst;
	int		i;

	if (ac < 2)
		return (1);
	lst = NULL;
	i = 0;
	while (i < atoi(av[1]))
	{
		ft_lstadd_back(&lst, ft_lstnew(NULL));
		i++;
	}
	printf("%d", ft_lstsize(lst));
	return (0);
}
 */