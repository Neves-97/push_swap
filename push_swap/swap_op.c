#include "push_swap.h"

void	s_a(t_node **stack_a)
{
	t_node *one_tmp;
	t_node *two_tmp;

	one_tmp = *stack_a;
	two_tmp = one_tmp->next;
	*stack_a = two_tmp;
	one_tmp->next = two_tmp->next;
	two_tmp->next = one_tmp;
	write(1, "sa\n", 3);
}

void	s_b(t_node **stack_b)
{
	t_node *one_tmp;
	t_node *two_tmp;

	one_tmp = *stack_b;
	two_tmp = one_tmp->next;
	*stack_b = two_tmp;
	one_tmp->next = two_tmp->next;
	two_tmp->next = one_tmp;
	write(1, "sa\n", 3);
}

void	s_sab(t_node **stack_a, t_node **stack_b)
{
	s_a(stack_a);
	s_b(stack_b);
	write(1, "ss\n", 3);
}