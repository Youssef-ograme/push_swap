#include "hedear.h"
static t_indx	*last_node(t_indx *s_b)
{
	if (!s_b)
		return (NULL);
	while (s_b->next != NULL)
		s_b = s_b->next;
	return (s_b);
}

void rb_index(t_indx **s_b)
{
    if(!s_b || !(*s_b) || !(*s_b)->next)
        return ;
    t_indx *end;
    t_indx *second;
    t_indx *last;
    last = last_node(*s_b);
    end = (*s_b);
    second = (*s_b) -> next;
    last -> next = end;
    end -> next = NULL;
    (*s_b) = second;
    write (1,"rb\n",3);
}