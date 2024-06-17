/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:42:27 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:26:48 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*temp;

	temp = *stack_b;
	(*stack_b) = (*stack_b)-> next;
	temp -> next = *stack_a;
	(*stack_a) = temp;
	write(1, "pb\n", 3);
}
