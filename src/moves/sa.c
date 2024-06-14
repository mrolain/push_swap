/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:18:18 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/14 15:50:24 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap_a(t_list *stack_a)
{
	t_list	*swap;
	int		temp;
	
	swap = stack_a -> next;
	temp = stack_a -> number;
	stack_a -> number = swap -> number;
	swap -> number = temp;
	write(1, "sa\n", 3);
}
