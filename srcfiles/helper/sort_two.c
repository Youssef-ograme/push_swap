#include "hedear.h"
void  sort_two(t_stack **head)
{
    t_stack *start;
    t_stack *min;

    min = return_min(*head);
    start = (*head);
    if(is_sorted(*head) == 1)
        return ;
    if(start != min)
    {
        sa(head);
        ft_putstr("sa\n");
    }
}