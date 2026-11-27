#include "hedear.h"
void sb(t_stack **head)
{
    t_stack *node3;
    t_stack *node2;
    if(!head || !*head || !(*head) -> next)
        return ;
    node2 = (*head) -> next;
    node3 = (*head) -> next -> next;
    (*head) -> next = node3;
    node2 -> next = (*head);
    *head = node2;
}