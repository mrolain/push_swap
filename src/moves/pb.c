/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 10:37:04 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 16:35:19 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	pb(t_list **stack_b, t_list **stack_a)
{
	t_list	*temp;

	if (ft_lstsize(*stack_a) < 1)
		return ;
	temp = *stack_a;
	(*stack_a) = (*stack_a)-> next;
	temp -> next = *stack_b;
	(*stack_b) = temp;
	write(1, "pb\n", 3);
}
