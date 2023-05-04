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


// . . . 
int		ft_find_max(t_node *stack);
int		ft_find_index(t_node *stack, int value);

//	SORT
void	ft_sort_three(t_node **stack_a);
void	ft_sort_five(t_node **stack_a, t_node **stack_b);


#endif