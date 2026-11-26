#include "hedear.h"
#include <stdio.h>
void check_algo_with_disorder(int argc , char **argv )
{
    float nb ;
    stack *node;
    node = return_nodes(argc ,argv);
    nb = compute_disorder(node);
    if (nb < 0.2)
        simple_algo(&node);
    else if (nb  < 0.5)
        res_from_stack_A(&node);
    else 
        printf ("dir dial radix hhh a ba bi3ziz hhhhhhhhhhhhhhhhhhh\b");
}