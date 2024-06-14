/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:16:52 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/14 16:27:39 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_list
{
	int		number;
	struct s_list	*next;
}	t_list;

const char	**ft_split(char const *s, char c);
int			ft_strcmp(const char *s1, const char *s2);
int			ft_isnumber(const char *str);
size_t		count_words(const char *s, char c);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		arg(const char **arr);
int			ft_isoverflow(const char *str);
int			ft_atoi(const char *nptr);
void		error_message(int error);
t_list		*init_list(const char **argv, int argc);
void		swap_ab(t_list *stack_a, t_list *stack_b);
void		swap_b(t_list *stack_b);
void		swap_a(t_list *stack_a);
t_list		*ft_lstlast(t_list *lst);
void		rotate_b(t_list **stack_b);
void		rotate_a(t_list **stack_a);

#endif