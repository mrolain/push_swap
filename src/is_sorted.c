/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:00:41 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/27 11:55:31 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	is_sorted(t_list **stack_a)
{
	t_list	*current;

	current = *stack_a;
	while ((current -> next))
	{
		if (current -> next == NULL)
			return ;
		if ((current -> number) < (current)-> next -> number)
			(current) = (current)-> next;
		else
			return ;
	}
	exit (0);
}
