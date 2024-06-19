/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:19:12 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/19 14:23:48 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort_three(t_list **stack_a)
{
	is_sorted(stack_a);
	if (((*stack_a) -> number) < ((*stack_a) -> next -> number))
	{
		rra(stack_a);
		is_sorted(stack_a);
		sa(*stack_a);
	}
	else if (((*stack_a) -> number) > ((*stack_a) -> next -> number))
	{
		if ((*stack_a) -> number < ft_lstlast(*stack_a) -> number)
			sa(*stack_a);
		else if ((*stack_a) -> next -> number < ft_lstlast(*stack_a) -> number)
			ra(stack_a);
		else
		{
			ra(stack_a);
			sa(*stack_a);
		}
	}
	is_sorted(stack_a);
}
