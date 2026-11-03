/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/15 00:04:22 by mag               #+#    #+#             */
/*   Updated: 2026/11/03 14:34:11 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (j >= dstsize)
		return (dstsize + ft_strlen(src));
	while (src[i] && (j + i) + 1 < dstsize)
	{
		dst[j + i] = src[i];
		i++;
	}
	if (dstsize > 0)
		dst[j + i] = 0;
	return (j + ft_strlen(src));
}
