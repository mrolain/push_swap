/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_check.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 15:20:03 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/26 15:29:41 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	lowest(t_list **stack_a)
{
	int		i;
	t_list	*temp;
	t_list	*tempp;

	i = 1;
	temp = (*stack_a);
	tempp = (*stack_a);
	while (temp)
	{
		while (temp -> number <= (tempp)-> number)
		{
			if ((tempp)-> next == NULL)
				return (i);
			(tempp) = (tempp)-> next;
		}
		temp = temp -> next;
		(tempp) = temp;
		i++;
	}
	return (i);
}
