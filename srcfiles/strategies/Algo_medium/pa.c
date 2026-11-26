#include "hedear.h"
void pa_index(t_indx **s_a , t_indx **s_b)
{
    t_indx *temp;
    if (!s_a || !s_b || !*s_b)
        return;
    temp = *s_b;
    *(s_b) = (*s_b) -> next;
    temp -> next = (*s_a);
    *(s_a) = temp;
    write (1,"pa\n",3);
}