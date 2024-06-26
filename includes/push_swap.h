/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrolain <mrolain@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 15:16:52 by mrolain           #+#    #+#             */
/*   Updated: 2024/06/26 15:47:27 by mrolain          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

typedef struct s_list
{
	int				number;
	struct s_list	*next;
	int				index;
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
t_list		*ft_lstlast(t_list *lst);
int			ft_lstsize(t_list *lst);
t_list		*ft_lstnew(int number);
void		rb(t_list **stack_b);
void		ra(t_list **stack_a);
void		rr(t_list **stack_a, t_list **stack_b);
void		ss(t_list *stack_a, t_list *stack_b);
void		sb(t_list *stack_b);
void		sa(t_list *stack_a);
void		rra(t_list **stack_a);
void		rrr(t_list **stack_a, t_list **stack_b);
void		rrb(t_list **stack_b);
void		pa(t_list **stack_b, t_list **stack_a);
void		pb(t_list **stack_a, t_list **stack_b);
void		is_sorted(t_list **stack_a);
void		sort_two(t_list **stack_a);
void		sort_three(t_list **stack_a);
void		sorter(t_list **stack_a, t_list **stack_b);
t_list		*min_value(t_list *stack_a);
void		sort_f(t_list **stack_a, t_list **stack_b);
void		printus(t_list **stack_a, t_list **stack_b);
int			lowest(t_list **stack_a);
void		init_index(t_list *stack_a);
void		radix_sort(t_list **stack_a, t_list **stack_b, int size);
int			is_simple_sorted(t_list **stack_a);

#endif