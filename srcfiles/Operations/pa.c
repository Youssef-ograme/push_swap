#include "hedear.h"
void pa(t_stack **s_a , t_stack **s_b)
{
    t_stack *temp;
    if (!s_a || !s_b || !*s_b)
        return;
    temp = *s_b;
    *(s_b) = (*s_b) -> next;
    temp -> next = (*s_a);
    *(s_a) = temp;
}