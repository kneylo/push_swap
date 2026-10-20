/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/20 00:20:05 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 17:23:21 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size != 0 && count > (SIZE_MAX / size))
		return (NULL);
	res = malloc(count * size);
	if (!res)
		return (NULL);
	ft_bzero(res, count * size);
	return (res);
}

/* int	main(int ac, char **av)
{
	int	*res;
	int	i;

	if (ac != 2)
		return (1);
	res = ft_calloc(atoi(av[1]), sizeof(int));
	if (!res)
		return (0);
	i = 0;
	while (i < atoi(av[1]))
	{
		printf("%d", res[i]);
		i++;
	}
	free (res);
	res = NULL;
	return (0);
}
 */