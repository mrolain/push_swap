/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 15:30:23 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/26 15:50:42 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_list	*min_value(t_list *stack_a)
{
	t_list	*min;

	min = NULL;
	while (stack_a)
	{
		if (stack_a->index == -1 && (!min || stack_a->number < min->number))
			min = stack_a;
		stack_a = stack_a->next;
	}
	return (min);
}

void	init_index(t_list *stack_a)
{
	int		index;
	t_list	*min_node;

	index = 1;
	min_node = min_value(stack_a);
	while (min_node)
	{
		min_node->index = index;
		index++;
		min_node = min_value(stack_a);
	}
}
