#include "push_swap.h"

void    ft_swap(int *a, int *b)
{
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;

}

t_node *get_last_node(t_node *head)
{
    if (head == NULL)
        return NULL;

    t_node *current = head;
    while (current->next != NULL)
        current = current->next;

    return current;
}

void partition(t_node **stack_a, t_node **stack_b)
{
    t_node *pivot = *stack_a;
    *stack_a = (*stack_a)->next;
    pivot->next = NULL;

    t_node *current = *stack_a;
    t_node *next;

    while (current != NULL)
    {
        next = current->next;
        if (current->value < pivot->value)
            p_b(stack_a, stack_b);
        else
            r_a(stack_a);
        current = next;
    }
}

void merge(t_node **stack_a, t_node **stack_b)
{
    while (*stack_b != NULL)
        p_a(stack_a, stack_b);
}

void quicksort(t_node **stack_a, t_node **stack_b)
{
    if (*stack_a == NULL || (*stack_a)->next == NULL)
        return;

    partition(stack_a, stack_b);

    quicksort(stack_a, stack_b);
    quicksort(stack_b, stack_a);

    merge(stack_a, stack_b);
}
