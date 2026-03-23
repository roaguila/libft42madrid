#include "../push_swap.h"

void    push(t_stack_node **to, t_stack_node **from)
{
    t_stack_node   *to_push;

    if (!*from)
        return ;
    to_push = *from;
    *from = (*from)->next;
    if (*from)
        (*from)->previous = NULL;
    to_push->previous = NULL;
    if (!*to)
    {
        *to = to_push;
        to_push->next = NULL;
    }
    else
    {
        to_push->next = *to;
        (*to)->previous = to_push;
        *to = to_push;
    }
}

void    pa(t_stack_node **stack_a, t_stack_node **stack_b, int testing)
{
    push(stack_a, stack_b);
    if (!testing)
        ft_putstr("pa\n");
}

void    pb(t_stack_node **stack_a, t_stack_node **stack_b, int testing)
{
    push(stack_b, stack_a);
    if (!testing)
        ft_putstr("pb\n");
}