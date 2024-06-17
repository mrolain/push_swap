/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:34:40 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 13:58:09 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	error_message(int error)
{
	if (error == 1)
		write(1, "\e[1;31mError:\e[1;87m No Input\n", 30);
	if (error == 2)
		write(1, "\e[1;31mError:\e[1;87m Invalid Input\n", 35);
	if (error == 3)
		write(1, "\e[1;31mError:\e[1;87m Duplicates Found\n", 38);
	if (error == 4)
		write(1, "\e[1;31mError:\e[1;87m Int Overflow\n", 34);
	exit(1);
}

void	dup_check(const char **str)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (str[i])
	{
		j = i + 1;
		while (str[j])
		{
			if (ft_strcmp(str[i], str[j]) == 0)
				error_message(3);
			j++;
		}
		i++;
	}
}

void	arg(const char **arr)
{
	int	i;

	i = 0;
	while (arr[i])
	{
		if (ft_isnumber(arr[i]) == 0)
			error_message(2);
		if (ft_isoverflow(arr[i]) == 0)
			error_message(4);
		i++;
	}
	dup_check(arr);
}
