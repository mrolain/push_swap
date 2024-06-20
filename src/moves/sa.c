/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:18:18 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 15:34:04 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sa(t_list *stack_a)
{
	t_list	*swap;
	int		temp;

	if (ft_lstsize(stack_a) < 2)
		return ;
	swap = stack_a -> next;
	temp = stack_a -> number;
	stack_a -> number = swap -> number;
	swap -> number = temp;
	write(1, "sa\n", 3);
}
