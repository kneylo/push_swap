/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 00:58:45 by mag               #+#    #+#             */
/*   Updated: 2026/10/07 17:04:40 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, ft_strlen(s1) + 1);
	ft_strlcat(res, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (res);
}

/* int	main(int ac, char **av)
{
	char	*res;

	if (ac != 3)
		return (1);
	res = ft_strjoin(av[1], av[2]);
	printf("%s", res);
	free (res);
	res = NULL;
	return (0);
}
 */