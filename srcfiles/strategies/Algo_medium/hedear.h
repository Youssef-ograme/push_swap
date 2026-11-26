#ifndef HEDEAR_H
# define HEDEAR_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack
{
	int				nb;
	struct s_stack	*next;
}	stack;

typedef struct s_indx
{
	int				nb;
	int				index;
	struct s_indx	*next;
}	t_indx;

t_indx	*add_rank(stack *list);
int     som_of_sqrt(stack *head , int *total);
void	pb_index(t_indx **a, t_indx **b);
void	ra_index(t_indx **s_a);
void pa_index(t_indx **s_a , t_indx **s_b);
void rb_index(t_indx **s_b);
void rrb_index(t_indx **s_b);
t_indx	*res_from_stack_B(stack *list, t_indx *stack_b , int *tt);
void res_from_stack_A(stack **list);
#endif
