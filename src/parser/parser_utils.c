/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 04:22:04 by mag               #+#    #+#             */
/*   Updated: 2026/11/03 14:21:44 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_algo	flag(char *av)
{
	t_algo	flag;

	if (ft_strncmp(av, "--simple", 9) == 0)
		flag = SIMPLE;
	else if (ft_strncmp(av, "--medium", 9) == 0)
		flag = MEDIUM;
	else if (ft_strncmp(av, "--complex", 9) == 0)
		flag = COMPLEX;
	else if (ft_strncmp(av, "--adaptive", 11) == 0)
		flag = ADAPTIVE;
	else
		flag = ERR;
	return (flag);
}

void	free_arg(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		free(str[i++]);
	free(str);
}
