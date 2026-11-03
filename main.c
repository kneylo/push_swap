/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:02:09 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 17:20:11 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_algo	flag_algo;
	t_bench	bench;

	flag_algo = ADAPTIVE;
	ft_memset(&bench, 0, sizeof(t_bench));
	a = parser(ac, av, &flag_algo, &bench);
	if (!a)
		return (1);
	bench.disorder = compute_disorder(a);
	if (bench.disorder == 0.00)
		return (stack_clear(&a), 0);
	b = NULL;
	if (flag_algo == SIMPLE)
		simple(&a, &b, &bench);
	else if (flag_algo == MEDIUM)
		medium(&a, &b, &bench);
	else if (flag_algo == COMPLEX)
		complex(&a, &b, &bench);
	else
		adaptive(&a, &b, &bench);
	if (bench.flag)
		print_bench(&bench, flag_algo);
	return (stack_clear(&a), 0);
}
