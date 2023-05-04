#include "push_swap.h"
// Replace with your header file name

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    int a, b, c;

    // Parse command-line arguments and push them onto the stack
    if (argc != 4)
    {
        printf("Usage: ./test_sort_three a b c\n");
        return 1;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);
    c = atoi(argv[3]);
    stack_a = malloc(sizeof(t_node));
    if (stack_a == NULL)
    {
        printf("Error: memory allocation failed\n");
        return 1;
    }
    stack_a->value = a;
    stack_a->next = malloc(sizeof(t_node));
    if (stack_a->next == NULL)
    {
        printf("Error: memory allocation failed\n");
        return 1;
    }
    stack_a->next->value = b;
    stack_a->next->next = malloc(sizeof(t_node));
    if (stack_a->next->next == NULL)
    {
        printf("Error: memory allocation failed\n");
        return 1;
    }
    stack_a->next->next->value = c;
    stack_a->next->next->next = NULL;

    // Print the original stack
    printf("Original stack:");
    t_node *current = stack_a;
    while (current != NULL)
    {
        printf(" %d", current->value);
        current = current->next;
    }
    printf("\n");

    // Sort the stack
    ft_sort_three(&stack_a);

    // Print the sorted stack
    printf("Sorted stack:");
    current = stack_a;
    while (current != NULL)
    {
        printf(" %d", current->value);
        current = current->next;
    }
    printf("\n");

    // Free memory
    current = stack_a;
    while (current != NULL)
    {
        t_node *next = current->next;
        free(current);
        current = next;
    }

    return 0;
}