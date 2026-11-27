#include "hedear.h"
int index_min(t_stack *head)
{
    t_stack *min_node;
    int index;
    min_node = return_min(head);
    index = 0;
    while(head &&  head != min_node)
    {
        index++;
        head = head -> next;
    }
    return index;
}