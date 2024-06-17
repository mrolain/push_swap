/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isoverflow.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 09:46:21 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/17 14:22:31 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isoverflow(const char *str)
{
	long	value;
	int		i;
	int		sign;

	value = 0;
	i = 0;
	sign = 1;
	if (str[i] == '-')
		sign = -sign;
	i++;
	while (str[i])
	{
		value *= 10;
		value += (str[i] - 48);
		i++;
	}
	value *= sign;
	if (value > 2147483647 || value < -2147483648)
		return (0);
	return (1);
}
