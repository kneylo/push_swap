/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkreter <nkreter@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:19:15 by mag               #+#    #+#             */
/*   Updated: 2026/11/04 17:14:00 by nkreter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// BIBLIOTHÈQUES
# include "../libft/include/libft.h"

// STRUCT
typedef struct s_stack
{
	long			data;
	int				index;
	struct s_stack	*next;
}	t_stack;

typedef enum s_algo
{
	ADAPTIVE,
	SIMPLE,
	MEDIUM,
	COMPLEX,
	ERR,
}	t_algo;

typedef struct s_bench
{
	int		flag;
	int		sa;
	int		sb;
	int		ss;
	int		pa;
	int		pb;
	int		ra;
	int		rb;
	int		rr;
	int		rra;
	int		rrb;
	int		rrr;
	int		total;
	double	disorder;
}	t_bench;

// MOVES
void			sa(t_stack **a, t_bench *bench);
void			sb(t_stack **b, t_bench *bench);
void			ss(t_stack **a, t_stack **b, t_bench *bench);
void			pa(t_stack **a, t_stack **b, t_bench *bench);
void			pb(t_stack **b, t_stack **a, t_bench *bench);
void			ra(t_stack **a, t_bench *bench);
void			rb(t_stack **b, t_bench *bench);
void			rr(t_stack **a, t_stack **b, t_bench *bench);
void			rra(t_stack **a, t_bench *bench);
void			rrb(t_stack **b, t_bench *bench);
void			rrr(t_stack **a, t_stack **b, t_bench *bench);

// STACK
unsigned int	stack_size(t_stack *lst);
t_stack			*stack_new(long data);
t_stack			*stack_last(t_stack *lst);
t_stack			*stack_last_prev(t_stack *lst);
void			stack_add_back(t_stack **lst, t_stack *new);
void			stack_clear(t_stack **lst);
void			stack_delone(t_stack *lst);

// ALGO
void			simple(t_stack **a, t_stack **b, t_bench *bench);
void			medium(t_stack **a, t_stack **b, t_bench *bench);
void			complex(t_stack **a, t_stack **b, t_bench *bench);
void			adaptive(t_stack **a, t_stack **b, t_bench *bench);
int				find_max_bits(int stack_size);
void			indexing(t_stack *a);

// PARSER
t_algo			flag(char *av);
void			free_arg(char **str);
long			*verif(int ac, char **av, int *len);
t_stack			*parser(int ac, char **av, t_algo *flag_algo, t_bench *bench);
double			compute_disorder(t_stack *a);

// FONCTIONS
double			compute_disorder(t_stack *a);
void			print_bench(t_bench *bench, t_algo strat);

#endif