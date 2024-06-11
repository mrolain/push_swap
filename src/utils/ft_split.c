/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:17:36 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/11 09:28:24 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

size_t	toomanyc(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	return (i);
}

size_t	strlendefou(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

char	*mallocator(const char *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	str = malloc(sizeof(char) * i + 1);
	if (!str)
		return (NULL);
	else
	{
		str = ft_memcpy(str, s, i);
		str[i] = '\0';
	}
	return (str);
}

const char	**ft_split(char const *s, char c)
{
	const char	**tab;
	int		i;
	int		nb;

	i = 0;
	nb = count_words(s, c);
	tab = (const char **)malloc(sizeof(char *) * (nb + 1));
	if (!tab)
		return (NULL);
	while (i < nb)
	{
		s = (s + toomanyc(s, c));
		tab[i] = mallocator(s, c);
		s = (s + strlendefou(tab[i], c));
		s = (s + toomanyc(s, c));
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
