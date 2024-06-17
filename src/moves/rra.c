/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 08:36:02 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:25:57 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rra(t_list **stack_a)
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
	write(1, "rra\n", 4);
}
