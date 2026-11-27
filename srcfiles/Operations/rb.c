#include "hedear.h"
static t_stack	*last_node(t_stack *s_b)
{
	if (!s_b)
		return (NULL);
	while (s_b->next != NULL)
		s_b = s_b->next;
	return (s_b);
}

void rb(t_stack **s_b)
{
    if(!s_b || !(*s_b) || !(*s_b)->next)
        return ;
    t_stack *end;
    t_stack *second;
    t_stack *last;
    last = last_node(*s_b);
    end = (*s_b);
    second = (*s_b) -> next;
    last -> next = end;
    end -> next = NULL;
    (*s_b) = second;
}