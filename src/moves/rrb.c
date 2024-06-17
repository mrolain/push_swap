/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:08:18 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:26:14 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rrb(t_list **stack_b)
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
	write(1, "rrb\n", 4);
}
