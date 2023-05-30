/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: roda-min <roda-min@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:42:43 by roda-min          #+#    #+#             */
/*   Updated: 2023/05/29 11:42:44 by roda-min         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void ft_rra(t_node **stack_a)
{
    t_node *last = *stack_a;
    t_node *prev = NULL;

    // Find the last node and its previous node
    while (last && last->next) 
    {
        prev = last;
        last = last->next;
    }

    // If the stack is empty or has only one element, do nothing
    if (!last || !prev)
        return;

    // Move the last node to the top of the stack
    prev->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
    write(1, "rra\n", 4);
}

void ft_rrb(t_node **stack_b)
{
    t_node *last = *stack_b;
    t_node *prev = NULL;

    // Find the last node and its previous node
    while (last && last->next) 
    {
        prev = last;
        last = last->next;
    }

    // If the stack is empty or has only one element, do nothing
    if (!last || !prev)
        return;

    // Move the last node to the top of the stack
    prev->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
    write(1, "rrb\n", 4);
}

void    rr_ab(t_node **stack_a, t_node  **stack_b)
{
    ft_rra(stack_a);
    ft_rrb(stack_b);
    write(1, "rrr\n", 4);
}