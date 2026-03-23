#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
    int                     value;
    struct s_stack_node     *next;
}   t_stack_node;
#endif