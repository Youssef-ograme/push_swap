#include "hedear.h"
int is_sorted(t_stack *head)
{
    while(head && head -> next)
    {
        if(head -> nb > head -> next -> nb)
            return 0;
        head = head -> next;
    }
    return 1;
}