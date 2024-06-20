/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:43:08 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 15:34:07 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sb(t_list *stack_b)
{
	t_list	*swap;
	int		temp;

	if (ft_lstsize(stack_b) < 2)
		return ;
	swap = stack_b -> next;
	temp = stack_b -> number;
	stack_b -> number = swap -> number;
	swap -> number = temp;
	write(1, "sb\n", 3);
}
