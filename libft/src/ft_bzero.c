/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/09 18:25:16 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 18:31:43 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* int	main(int ac, char **av)
{
	int	i;

	if (ac != 3)
		return (1);
	ft_bzero(av[1], atoi(av[2]));
	i = 0;
	while (i < atoi(av[2]))
		printf("%d", av[1][i++]);
	return (0);
}
 */