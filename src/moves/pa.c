/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:37:04 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:26:45 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	temp = *stack_a;
	(*stack_a) = (*stack_a)-> next;
	temp -> next = *stack_b;
	(*stack_b) = temp;
	write(1, "pa\n", 3);
}
