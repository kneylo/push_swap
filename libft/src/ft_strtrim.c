/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 13:31:58 by mag               #+#    #+#             */
/*   Updated: 2026/10/08 18:54:40 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;

	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i > 0 && ft_strrchr(set, s1[i]))
		i--;
	return (ft_substr(s1, 0, i + 1));
}

/* int	main(int ac, char **av)
{
	if (ac != 3)
		return (1);
	printf("%s\n",ft_strtrim(av[1], av[2]));
	return (0);
}
 */