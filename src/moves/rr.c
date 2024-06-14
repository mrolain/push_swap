/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:32:19 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/14 16:35:50 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	rotate_a(t_list **stack_a)
{
	t_list	*last;
	
	last = ft_lstlast(*stack_a);
	last -> next = *stack_a;
	(*stack_a) = (*stack_a) -> next;
	last -> next -> next = NULL;		
}

static void	rotate_b(t_list **stack_b)
{
	t_list	*last;
	
	last = ft_lstlast(*stack_b);
	last -> next = *stack_b;
	(*stack_b) = (*stack_b) -> next;
	last -> next -> next = NULL;
}

void reverse_rotate(t_list **stack_a, t_list **stack_b)
{
	rotate_a(stack_a);
	rotate_b(stack_b);
	write(1, "rr\n", 3);
}