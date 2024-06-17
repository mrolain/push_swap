/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:39:20 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:00:04 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_list	*ft_lstnew(int number)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new -> number = number;
	new -> next = NULL;
	return (new);
}

t_list	*init_list(const char **argv, int argc)
{
	t_list	*stack_a;
	t_list	*current;
	int		i;

	i = 0;
	stack_a = ft_lstnew(ft_atoi(argv[i++]));
	current = stack_a;
	while (i < argc)
	{
		current -> next = ft_lstnew(ft_atoi(argv[i]));
		current = current -> next;
		i++;
	}
	return (stack_a);
}
