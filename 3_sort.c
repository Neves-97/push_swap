/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3_sort.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 10:24:40 by roda-min          #+#    #+#             */
/*   Updated: 2023/05/30 13:59:21 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort_three(t_node **stack_a)
{
	int	a;
	int	b;
	int	c;

	a = (*stack_a)->value;
	b = (*stack_a)->next->value;
	c = (*stack_a)->next->next->value;
	if (a > b && b > c)
	{
		s_a(stack_a);
		ft_rra(stack_a);
	}
	else if (a > c && c > b)
		r_a(stack_a);
	else if (b > c && c > a)
	{
		s_a(stack_a);
		r_a(stack_a);
	}
	else if (b > a && a > c)
		ft_rra(stack_a);
	else if (c > a && a > b)
		s_a(stack_a);
}

void	ft_sort_five(t_node **stack_a, t_node **stack_b)
{
	int	max;
	int	i;

	while (ft_lstsize(*stack_a) > 3)
	{
		max = ft_find_max(*stack_a);
		i = ft_find_index(*stack_a, max);
		if (i < ft_lstsize(*stack_a) / 2)
			while ((*stack_a)->value != max)
				r_a(stack_a);
		else
			while ((*stack_a)->value != max)
				ft_rra(stack_a);
		p_b(stack_a, stack_b);
	}
	ft_sort_three(stack_a);
	while (*stack_b)
	{
		p_a(stack_a, stack_b);
		if ((*stack_a)->value > (*stack_a)->next->value)
			s_a(stack_a);
	}
}

int		ft_find_max(t_node *stack)
{
	int	max;

	max = stack->value;
	while (stack)
	{
		if (stack->value > max)
			max = stack->value;
		stack = stack->next;
	}
	return (max);
}

int		ft_find_index(t_node *stack, int value)
{
	int	i;

	i = 0;
	while (stack)
	{
		if (stack->value == value)
			return (i);
		stack = stack->next;
		i++;
	}
	return (-1);
}