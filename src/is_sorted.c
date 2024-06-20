/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 11:00:41 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/20 17:15:14 by mrolain          ###   ########.fr       */
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
	write(1, "\e[1;32mOK\n", 10);
	exit (0);
}
