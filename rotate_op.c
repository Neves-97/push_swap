/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_op.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:42:45 by roda-min          #+#    #+#             */
/*   Updated: 2023/05/29 11:42:46 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_a(t_node **stack_a)
{
	t_node	*tmp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	tmp = *stack_a;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *stack_a;
	*stack_a = (*stack_a)->next;
	tmp->next->next = NULL;
	write(1, "ra\n", 3);
}

void	r_b(t_node	**stack_b)
{
	t_node	*tmp;
	
	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	tmp = *stack_b;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = *stack_b;
	*stack_b = (*stack_b)->next;
	tmp->next->next = NULL;
	write(1, "rb\n", 3);
}

void	r_rab(t_node	**stack_a, t_node	**stack_b)
{
	r_a(stack_a);
	r_b(stack_b);
	write(1, "rr\n", 3);
}