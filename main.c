/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/20 17:02:09 by mag               #+#    #+#             */
/*   Updated: 2026/11/02 20:05:53 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;
	t_algo	flag_algo;
	t_bench	bench;



	t_stack *tmpa;

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
		adaptive(&a, &b, &bench);



	tmpa = a;
	while (tmpa)
	{
		ft_printf("%d\n", tmpa->data);
		tmpa = tmpa->next;
	}

	return (0);
}



// int	main(int ac, char **av)
// {
// 	t_stack	*a;
// 	// t_stack	*tmpa;
// 	t_stack	*b;
// 	t_algo	flag_algo;
// 	t_bench	*bench;

// 	flag_algo = ADAPTIVE;
// 	ft_memset(&bench, 0, sizeof(t_bench));
// 	a = parser(ac, av, &flag_algo, bench);
// 	if (!a)
// 		return (1);
// 	b = NULL;
// 	// ft_printf("\n\n");
// 	// tmpa = a;
// 	// while (tmpa)
// 	// {
// 	// 	ft_printf("%d\n", tmpa->data);
// 	// 	tmpa = tmpa->next;
// 	// }
// 	ft_printf("\n\n");
// 	if (flag_algo == SIMPLE)
// 		simple(&a, &b, bench);
// 	else if (flag_algo == MEDIUM)
// 		medium(&a, &b, bench);
// 	else if (flag_algo == COMPLEX)
// 		complex(&a, &b, bench);
// 	else
// 		adaptive(&a, &b, bench);
// 	// ft_printf("%d", flag_algo);
// 	ft_printf("\n\n");
// 	// tmpa = a;
// 	// while (tmpa)
// 	// {
// 	// 	ft_printf("%d\n", tmpa->data);
// 	// 	tmpa = tmpa->next;
// 	// }
// 	ft_printf("%d\n\n", a->data);
// 	return (0);
// }
