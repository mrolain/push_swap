/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 16:26:55 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 15:33:31 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rb(t_list **stack_b)
{
	t_list	*last;

	if (ft_lstsize(*stack_b) < 2)
		return ;
	last = ft_lstlast(*stack_b);
	last -> next = *stack_b;
	(*stack_b) = (*stack_b)-> next;
	last -> next -> next = NULL;
	write(1, "rb\n", 3);
}
