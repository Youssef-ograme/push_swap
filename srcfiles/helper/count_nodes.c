#include "hedear.h"
int count_nodes(t_stack *head)
{
    int count;
    count = 0;
    while(head)
    {
        count++;
        head = head -> next;
    }
    return count;
}