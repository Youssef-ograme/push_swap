#include "hedear.h"
void pb(t_stack **s_a , t_stack **s_b)
{
    t_stack *temp;
    if (!s_b || !s_a || !*s_a)
        return;
    temp = *s_a;
    *(s_a) = (*s_a) -> next;
    temp -> next = (*s_b);
    *(s_b) = temp;
}