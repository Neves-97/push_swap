/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:42:39 by roda-min          #+#    #+#             */
/*   Updated: 2023/05/29 12:43:17 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

typedef struct s_node 
{
    int 	value;
    void    *data;
    struct s_node *next;
} t_node;

// PUSH
void    p_a(t_node **stack_a, t_node **stack_b);
void    p_b(t_node **stack_a, t_node **stack_b);

// SWAP
void	s_a(t_node **stack_a);
void	s_b(t_node **stack_b);
void	s_sab(t_node **stack_a, t_node **stack_b);

// ROTATE
void	r_a(t_node **stack_a);
void	r_b(t_node	**stack_b);
void	r_rab(t_node	**stack_a, t_node	**stack_b);

// REVERSE_ROTATE
void ft_rra(t_node **stack_a);
void ft_rrb(t_node **stack_b);
void    rr_ab(t_node **stack_a, t_node  **stack_b);

// UTILS
int	ft_lstsize(t_node *lst);
int	ft_strcmp(const char *s1, const char *s2, size_t n);
char **ft_split(char const *s, char c);

// UTILS 2
size_t	ft_strlen(const char *s);
int	ft_atoi(const char *str);

// . . . 
int		ft_find_max(t_node *stack);
int		ft_find_index(t_node *stack, int value);

//	SORT
void	ft_sort_three(t_node **stack_a);
void	ft_sort_five(t_node **stack_a, t_node **stack_b);

#endif