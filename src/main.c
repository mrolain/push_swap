/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:15:10 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/14 16:28:49 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printus(t_list *stack)
{
	t_list	*current;

	current = stack;
	while (current)
	{
		printf("%d\n", current -> number);
		current = current -> next;
	}
}

int main(int argc, const char *argv[])
{
	t_list	*stack_a;

	if (argc < 2)
	{
		stack_a = NULL;	
		error_message(1);
	}
	else if (argc == 2)
	{
		arg(ft_split(argv[1], ' '));
		stack_a = init_list(ft_split(argv[1], ' '), count_words(argv[1], ' '));
	}
	else
	{
		arg(argv + 1);
		stack_a = init_list(argv + 1, argc - 1);
	}
	rotate_a(&stack_a);
	printus(stack_a);
	exit(0);
	return (0);
}