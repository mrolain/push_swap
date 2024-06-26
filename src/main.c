/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:15:10 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/26 15:50:25 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// void	printus(t_list **stack_a, t_list **stack_b)
// {
// 	t_list	*current_a;
// 	t_list	*current_b;
//
// 	current_a = *stack_a;
// 	current_b = *stack_b;
// 	while (current_a)
// 	{
// 		printf("\e[4;1;32mcurrent a = %d\e[0m\n", current_a -> number);
// 		current_a = current_a -> next;
// 	}
// 	while (current_b)
// 	{
// 		printf("\e[4;1;36mcurrent b = %d\e[0m\n", current_b -> index);
// 		current_b = current_b -> next;
// 	}
// }

void	free_list(t_list **stack)
{
	t_list	*current;
	t_list	*temp;

	current = *stack;
	while (current)
	{
		temp = current -> next;
		free (current);
		current = temp;
	}
	*stack = NULL;
}

int	main(int argc, const char *argv[])
{
	t_list		*stack_a;
	t_list		*stack_b;
	const char	**test;

	stack_b = NULL;
	stack_a = NULL;
	test = NULL;
	if (argc < 2)
		error_message(1);
	else if (argc == 2)
	{
		test = ft_split(argv[1], ' ');
		arg(test);
		stack_a = init_list(test, count_words(argv[1], ' '));
	}
	else
	{
		arg(argv + 1);
		stack_a = init_list(argv + 1, argc - 1);
	}
	sorter(&stack_a, &stack_b);
	free_list(&stack_a);
	free_list(&stack_b);
	return (0);
}
