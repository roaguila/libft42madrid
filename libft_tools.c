#include "push_swap.h"

int    ft_strlen(const char *s)
{
    size_t	i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}

int stack_lenght(t_stack_node *stack)
{
    int i;

    i = 0;
    while (stack)
    {
        stack = stack->next;
        i++;
    }
    return (i);
}

t_stack_node    *last_node(t_stack_node *stack)
{
    if (!stack)
        return (NULL);
    while (stack->next)
        stack = stack->next;
    return (stack);
}

int ft_isdigit(int c)
{
    if (c >= '0' && c <= '9')
        return (1);
    return (0);
}

long    ft_atoi(const char *str)
{
    int     i;
    long    res;
    int     sign;

    i = 0;
    res = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }
    while (ft_isdigit(str[i]))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return (res * sign);
}