#include "hedear.h"

static void	chunk_update(int *max, int *push, int som, int total)
{
	*max += som;
	*push = 0;
	if (total - 1 - *max < som)
		*max = total - 1;
}

t_indx	*res_from_stack_B(stack *list, t_indx *stack_b , int *tt)
{
	t_indx	*stack_a;
	int		som;
	int		max;
	int		push;
	int total;
	
	som = som_of_sqrt(list , &total);
	*tt = total;
	max = som - 1;
	push = 0;
	stack_a = add_rank(list);
	while (stack_a)
	{
		if (stack_a->index <= max)
		{
			pb_index(&stack_a, &stack_b);
			push++;
		}
		else
			ra_index(&stack_a);
		if (push == som)
			chunk_update(&max, &push, som, total);
	}
	return (stack_b);
}

