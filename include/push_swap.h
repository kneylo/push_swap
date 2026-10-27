/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mag <mag@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/19 20:19:15 by mag               #+#    #+#             */
/*   Updated: 2026/10/26 15:12:59 by mag              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// BIBLIOTHÈQUES
# include "../libft/include/libft.h"

// STRUCT
typedef struct s_stack
{
	int				data;
	int				index;
	struct s_stack	*next;
}	t_stack;

// MOVES
void			sa(t_stack *a);
void			sb(t_stack *b);
void			ss(t_stack *a, t_stack *b);
void			pa(t_stack **a, t_stack **b);
void			pb(t_stack **b, t_stack **a);
void			ra(t_stack **a);
void			rb(t_stack **b);
void			rr(t_stack **a, t_stack **b);
void			rra(t_stack **a);
void			rrb(t_stack **b);
void			rrr(t_stack **a, t_stack **b);

// STACK
unsigned int	stack_size(t_stack *lst);
t_stack			*stack_new(int data);
t_stack			*stack_map(t_stack *lst, int (*f)(int));
t_stack			*stack_last(t_stack *lst);
t_stack			*stack_last_prev(t_stack *lst);
void			stack_iter(t_stack *lst, void (*f)(int));
void			stack_delone(t_stack *lst);
void			stack_clear(t_stack **lst);
void			stack_add_front(t_stack **lst, t_stack *new);
void			stack_add_back(t_stack **lst, t_stack *new);

// ALGO
void			simple(t_stack **a, t_stack **b);
void			medium(t_stack **a, t_stack **b);
void			adaptive(t_stack **a, t_stack **b);

// FONCTIONS

#endif