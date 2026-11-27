#include "hedear.h"
t_stack	*ft_lstnew(int n)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new-> nb = n;
	new -> index = 0;
	new->next = NULL;
	return (new);
}