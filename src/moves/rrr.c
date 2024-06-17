/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:09:04 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:26:31 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rrb_(t_list **stack_b)
{
	t_list	*current;
	t_list	*last;
	int		i;

	current = *stack_b;
	i = ft_lstsize(*stack_b);
	while (i != 2)
	{
		current = current -> next;
		i--;
	}
	last = ft_lstlast(*stack_b);
	last -> next = *stack_b;
	*stack_b = last;
	current -> next = NULL;
}

static void	rra_(t_list **stack_a)
{
	t_list	*current;
	t_list	*last;
	int		i;

	current = *stack_a;
	i = ft_lstsize(*stack_a);
	while (i != 2)
	{
		current = current -> next;
		i--;
	}
	last = ft_lstlast(*stack_a);
	last -> next = *stack_a;
	*stack_a = last;
	current -> next = NULL;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra_(stack_a);
	rrb_(stack_b);
	write(1, "rrr\n", 4);
}
