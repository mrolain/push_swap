/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:42:27 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 17:10:07 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;

	if (ft_lstsize(*stack_b) < 1)
		return ;
	temp = *stack_b;
	(*stack_b) = (*stack_b)-> next;
	temp -> next = *stack_a;
	(*stack_a) = temp;
	write(1, "pa\n", 3);
}
