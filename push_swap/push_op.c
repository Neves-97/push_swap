#include "push_swap.h"

void    p_a(t_node **stack_a, t_node **stack_b)
{
    t_node *tmp;

    if (*stack_b == NULL)
        return ;
    else if (*stack_b != NULL)
    {
        tmp = *stack_b;
        *stack_b = (*stack_b)->next;
        tmp->next = *stack_a;
        *stack_a = tmp;
        write(1, "pa\n", 3);
    }
}

void    p_b(t_node **stack_a, t_node **stack_b)
{
    t_node  *tmp;

    if (*stack_a == NULL)
        return ;
    else if(*stack_a != NULL)
    {
        tmp = *stack_a;
        *stack_a = (*stack_a)->next;
        tmp->next = *stack_b;
        *stack_a = tmp;
        write(1, "pb\n", 3);
    }
}