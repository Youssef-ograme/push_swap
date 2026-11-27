#include "hedear.h"
static t_stack	*last_node(t_stack *s_a)
{
	if (!s_a)
		return (NULL);
	while (s_a->next != NULL)
		s_a = s_a->next;
	return (s_a);
}

void ra(t_stack **s_a)
{
    if(!s_a || !(*s_a) || !(*s_a)->next)
        return ;
    t_stack *end;
    t_stack *second;
    t_stack *last;
    last = last_node(*s_a);
    end = (*s_a);
    second = (*s_a) -> next;
    last -> next = end;
    end -> next = NULL;
    (*s_a) = second;
}