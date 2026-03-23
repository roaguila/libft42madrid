#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_stack_node
{
    int                     indexing;
    int                     push_cost;
    int                     value;
    int                     abv_median_ln;
    int                     cheapest;
    struct s_stack_node     *next;
    struct s_stack_node     *prev;
    struct s_stack_node     *trgt_node;
}   t_stack_node;
#endif