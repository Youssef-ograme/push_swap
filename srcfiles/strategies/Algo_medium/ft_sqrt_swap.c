#include "hedear.h"

static int ft_sqrt(int nb)
{
    int i = 1;
    while (i  * i <= nb)
        i++;
    return i;
}

void total_numbers(stack *head , int *total)
{
    *total = 0;
    while (head)
    {
        (*total)++;
        head = head -> next;
    }
}
int som_of_sqrt(stack *head , int *total)
{
    total_numbers(head ,total);
    return ft_sqrt(*total);
}
