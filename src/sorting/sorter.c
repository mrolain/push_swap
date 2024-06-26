/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:33:38 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/26 15:48:17 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sorter(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = ft_lstsize(*stack_a);
	if (i == 1)
		is_sorted(stack_a);
	else if (i == 2)
		sort_two(stack_a);
	else if (i == 3)
		sort_three(stack_a);
	else if (i == 5 || i == 4)
		sort_f(stack_a, stack_b);
	else
	{
		init_index(*stack_a);
		radix_sort(stack_a, stack_b, i);
	}
}
