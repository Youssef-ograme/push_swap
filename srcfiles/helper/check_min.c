#include "hedear.h"

int check_MIN (stack *S_a)
{
    stack *temp1;
    temp1 = S_a;
    
    int MIN = temp1 -> nb;
    while (temp1)
    {
        if (MIN > temp1 -> nb)
            MIN = temp1 -> nb;  
        temp1 = temp1 -> next;
    }

    return MIN;
}
stack *check_node (stack *head)
{
    if (!head)
        return NULL;  
    int nb = check_MIN (head);
    while (head)
    {
        if (head -> nb == nb)
            return head;
        head = head -> next;
    }
    return NULL;
}

// #include <stdlib.h>
// #include <stdio.h>
// int main()
// {
//     stack *head = malloc(sizeof(stack));
//     stack *node1 = malloc(sizeof(stack));
//     stack *node2 = malloc(sizeof(stack));
//     stack *node3 = malloc(sizeof(stack));
//     head -> nb = -11;
//     node1 -> nb = 1;
//     node2 -> nb = 2;
//     node3 -> nb = 3;
//     head -> next = node1;
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = NULL;
//     stack *res = check_node (head);
//     printf ("%d",res -> nb);
// }