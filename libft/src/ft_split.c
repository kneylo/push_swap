/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/21 15:39:03 by mag               #+#    #+#             */
/*   Updated: 2026/11/03 14:33:47 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
			res++;
		i++;
	}
	return (res);
}

static int	len_word(char const *s, char c, int i)
{
	int	res;

	while (s[i] == c)
		i++;
	res = i;
	while (s[res] && s[res] != c)
		res++;
	return (res - i);
}

static void	freestr(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		j;

	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < count_words(s, c))
	{
		if (s[i] != c && (s[i - 1] == c || i == 0))
		{
			res[j] = ft_substr(s, i, len_word(s, c, i));
			if (!res[j])
				freestr(res);
			j++;
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}
