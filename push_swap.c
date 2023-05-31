#include "push_swap.h"

void print_stack(t_node *stack)
{
    t_node *current = stack;
    while (current != NULL)
    {
        printf(" %d", current->value);
        current = current->next;
    }
    printf("\n");
}

int main(int argc, char **argv)
{
    t_node *stack_a = NULL;
    int *numbers;
    int i;

    if (argc < 2)
    {
        printf("Usage: ./push_swap number1 number2 ...\n");
        return 1;
    }

    // Allocate memory for the numbers array
    numbers = malloc((argc - 1) * sizeof(int));
    if (numbers == NULL)
    {
        printf("Error: memory allocation failed\n");
        return 1;
    }

    // Convert command-line arguments to integers and store them in the numbers array
    for (i = 0; i < argc - 1; i++)
    {
        numbers[i] = atoi(argv[i + 1]);
    }

    // Create the stack based on the numbers array
    for (i = argc - 2; i >= 0; i--)
    {
        t_node *new_node = malloc(sizeof(t_node));
        if (new_node == NULL)
        {
            printf("Error: memory allocation failed\n");
            return 1;
        }
        new_node->value = numbers[i];
        new_node->next = stack_a;
        stack_a = new_node;
    }

    // Print the original stack
    printf("Original stack:");
    print_stack(stack_a);

    // Sort the stack
    ft_sort_three(&stack_a);

    // Print the sorted stack
    printf("Sorted stack:");
    print_stack(stack_a);

    // Free memory
    t_node *current = stack_a;
    while (current != NULL)
    {
        t_node *next = current->next;
        free(current);
        current = next;
    }

    free(numbers);

    return 0;
}
