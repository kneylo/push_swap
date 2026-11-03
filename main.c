/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:02:09 by mag               #+#    #+#             */
/*   Updated: 2026/11/03 15:20:03 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* static void test_disorder(t_stack *a)
{
	ft_printf("%f\n\n", compute_disorder(a));
}

static void test_stack_flag(t_stack *a, t_algo flag_algo)
{
	t_stack *tmpa;

	if (flag_algo == SIMPLE)
		ft_printf("SIMPLE\n\n");
	else if (flag_algo == MEDIUM)
		ft_printf("MEDIUM\n\n");
	else if (flag_algo == COMPLEX)
		ft_printf("COMPLEX\n\n");
	else if (flag_algo == ADAPTIVE)
		ft_printf("ADAPTIVE\n\n");
	tmpa = a;
	while (tmpa)
	{
		ft_printf("%d\n", tmpa->data);
		tmpa = tmpa->next;
	}
}
 */
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
		return (0);
	b = NULL;
	if (flag_algo == SIMPLE)
		simple(&a, &b, &bench);
	else if (flag_algo == MEDIUM)
		medium(&a, &b, &bench);
	else if (flag_algo == COMPLEX)
		complex(&a, &b, &bench);
	else
		adaptive(&a, &b, &flag_algo, &bench);
	return (0);
}
