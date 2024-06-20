/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 14:32:45 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 17:14:46 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	is_simple_sorted(t_list **stack_a)
{
	t_list	*current;

	current = *stack_a;
	while (((current)-> next))
	{
		if (((current)-> number) < ((current)-> next -> number))
			(current) = (current)-> next;
		else
			return (0);
	}
	return (1);
}

void	sort_a(t_list **stack_a)
{
	if (is_simple_sorted(stack_a) == 1)
		return ;
	if (((*stack_a)-> number) < ((*stack_a)-> next -> number))
	{
		rra(stack_a);
		if (is_simple_sorted(stack_a) == 0)
			sa(*stack_a);
	}
	else if (((*stack_a)-> number) > ((*stack_a)-> next -> number))
	{
		if ((*stack_a)-> number < ft_lstlast(*stack_a)-> number)
			sa(*stack_a);
		else if ((*stack_a)-> next -> number < ft_lstlast(*stack_a)-> number)
			ra(stack_a);
		else
		{
			ra(stack_a);
			sa(*stack_a);
		}
	}
}

void	four_to_five(t_list **stack_a, t_list **stack_b, int i)
{
	if (i == (ft_lstsize(*stack_a) - 1))
	{
		rra(stack_a);
		rra(stack_a);
		pb(stack_b, stack_a);
		return ;
	}
	else if (i == (ft_lstsize(*stack_a)))
	{
		rra(stack_a);
		pb(stack_b, stack_a);
		return ;
	}
}

void	lowest_to_b(t_list **stack_a, t_list **stack_b)
{
	int	i;

	i = lowest(stack_a);
	if (i == 1)
	{
		pb(stack_b, stack_a);
		return ;
	}
	else if (i == 2)
	{
		sa(*stack_a);
		pb(stack_b, stack_a);
		return ;
	}
	else if (i == 3)
	{
		ra(stack_a);
		ra(stack_a);
		pb(stack_b, stack_a);
		return ;
	}
	else
		four_to_five(stack_a, stack_b, i);
}

void	sort_f(t_list **stack_a, t_list **stack_b)
{
	is_sorted(stack_a);
	while (ft_lstsize(*stack_a) > 3)
	{
		lowest_to_b(stack_a, stack_b);
	}
	sort_a(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	printus(stack_a, stack_b);
	is_sorted(stack_a);
}
