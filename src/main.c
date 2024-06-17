/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:15:10 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:49:42 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	printus(t_list **stack_a, t_list **stack_b)
{
	t_list	*current_a;
	t_list	*current_b;

	current_a = *stack_a;
	current_b = *stack_b;
	while (current_a)
	{
		printf("\e[4;1;32mcurrent a = %d\e[0m\n", current_a -> number);
		current_a = current_a -> next;
	}
	while (current_b)
	{
		printf("\e[4;1;36mcurrent b = %d\e[0m\n", current_b -> number);
		current_b = current_b -> next;
	}
}

int	main(int argc, const char *argv[])
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_b = NULL;
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
	printus(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	pa(&stack_a, &stack_b);
	printus(&stack_a, &stack_b);
	pb(&stack_b, &stack_a);
	printus(&stack_a, &stack_b);
	ra(&stack_a);
	printus(&stack_a, &stack_b);
	rb(&stack_b);
	printus(&stack_a, &stack_b);
	rr(&stack_a, &stack_b);
	printus(&stack_a, &stack_b);
	rra(&stack_a);
	printus(&stack_a, &stack_b);
	rrb(&stack_b);
	printus(&stack_a, &stack_b);
	rrr(&stack_a, &stack_b);
	printus(&stack_a, &stack_b);
	sa(stack_a);
	printus(&stack_a, &stack_b);
	sb(stack_b);
	ss(stack_a, stack_b);
	printus(&stack_a, &stack_b);
	exit(0);
	return (0);
}
