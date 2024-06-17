/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:44:05 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:23:59 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

static void	swap_a_(t_list *stack_a)
{
	t_list	*swap;
	int		temp;

	swap = stack_a -> next;
	temp = stack_a -> number;
	stack_a -> number = swap -> number;
	swap -> number = temp;
}

static void	swap_b_(t_list *stack_b)
{
	t_list	*swap;
	int		temp;

	swap = stack_b -> next;
	temp = stack_b -> number;
	stack_b -> number = swap -> number;
	swap -> number = temp;
}

void	ss(t_list *stack_a, t_list *stack_b)
{
	swap_a_(stack_a);
	swap_b_(stack_b);
	write(1, "ss\n", 3);
}
