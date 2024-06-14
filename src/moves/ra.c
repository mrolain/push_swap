/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:59:51 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/14 16:37:05 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	rotate_a(t_list **stack_a)
{
	t_list	*last;
	
	last = ft_lstlast(*stack_a);
	last -> next = *stack_a;
	(*stack_a) = (*stack_a) -> next;
	last -> next -> next = NULL;
	write(1, "ra\n", 3);
}
