#include "hedear.h"
static t_stack	*last_node(t_stack *s_a)
{
	if (!s_a)
		return (NULL);
	while (s_a->next != NULL)
		s_a = s_a->next;
	return (s_a);
}
static t_stack	*llast_node(t_stack *s_a)
{
    t_stack *last;
    last = last_node(s_a);
	if (!s_a)
		return (NULL);
	while (s_a->next != last)
		s_a = s_a->next;
	return (s_a);
}
void rra(t_stack **s_a)
{
    if(!s_a || !(*s_a) || !(*s_a)->next)
        return ;
    t_stack *last1;
    t_stack *last2;
    last1 = last_node(*s_a);
    last2 = llast_node(*s_a);
    last1 -> next = (*s_a);
    (*s_a) = last1;
    last2 -> next = NULL;
     
}
// #include <stdio.h>
// int main()
// {
//     t_stack *head = malloc(sizeof(t_stack));
//     t_stack *node1 = malloc(sizeof(t_stack));
//     t_stack *node2 = malloc(sizeof(t_stack));
//     t_stack *node3 = malloc(sizeof(t_stack));
//     head -> nb = 11;
//     node1 -> nb = 1;
//     node2 -> nb = 2;
//     node3 -> nb = 3;
//     head -> next = node1;
//     node1 -> next = node2;
//     node2 -> next = node3;
//     node3 -> next = NULL;

//     t_stack *Head = malloc(sizeof(t_stack));
//     t_stack *Code1 = malloc(sizeof(t_stack));
//     t_stack *Code2 = malloc(sizeof(t_stack));
//     t_stack *Code3 = malloc(sizeof(t_stack));
//     Head -> nb = 1115;
//     Code1 -> nb = 1;
//     Code2 -> nb = 2;
//     Code3 -> nb = 3;
//     Head -> next = Code1;
//     Code1 -> next = Code2;
//     Code2 -> next = Code3;
//     Code3 -> next = NULL;
//     rra(&head);
//     while(head)
//     {
//         printf("%d\n", head -> nb);
//         head = head -> next;
//     }
// }