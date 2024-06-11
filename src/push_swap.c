/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:15:10 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/11 09:43:44 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, const char *argv[])
{
	if (argc < 2)
		error_message(1);
	else if (argc == 2)
		arg(ft_split(argv[1], ' '));
	else
		arg(argv + 1);
	return (0);
} 