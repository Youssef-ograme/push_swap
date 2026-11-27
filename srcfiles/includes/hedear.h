#ifndef HEDEAR_H
#define HEDEAR_H
 
#include <unistd.h>
#include <stdlib.h>

typedef struct s_stack
{
	int				nb;
	int				index;
	struct s_stack *next;
}   t_stack;

t_stack *add_rank(t_stack *list);
int     som_of_sqrt(t_stack*head , int *total);
void	pb_index(t_stack *a, t_stack *b);
void	ra_index(t_stack *s_a);
void pa_index(t_stack *s_a , t_stack *s_b);
void rb_index(t_stack *s_b);
void rrb_index(t_stack *s_b);
t_stack *res_from_stack_B(t_stack *list, t_stack *stack_b , int *tt);
void res_from_stack_A(t_stack **list);
float compute_disorder(t_stack *node);
int check(int nb , char **str);
long ft_atoi(char *str);
int is_intger(char *str);
int check_dup(int nb , char **str);
void pa(t_stack **s_a , t_stack **s_b);
void pb(t_stack **s_a , t_stack **s_b);
void ra(t_stack **s_a);
void rb(t_stack **s_a);
void rr(t_stack **s_a , t_stack **s_b);
void rra(t_stack **s_a);
void rrb(t_stack **s_a);
void rrr(t_stack **s_a , t_stack **s_b);
void sa(t_stack **s_a);
void sb(t_stack **s_a);
void ss(t_stack **s_a , t_stack **s_b);
int is_sorted(t_stack *head);
t_stack *return_min(t_stack *head);
void ft_putstr(char *str);
int count_nodes(t_stack *head);
int index_min(t_stack *head);
void simple_algo (t_stack **list);
void sort_three(t_stack **head);
void  sort_two(t_stack **head);
// void quick_sort(t_stack **s_a , t_stack **s_b  , int start , int end);
t_stack	*ft_lstnew(int n);
t_stack	*ft_lstlast(t_stack *lst);
void	ft_lstadd_back(t_stack **lst, t_stack *new);
t_stack *return_nodes(int argc , char **argv );
void check_algo_with_disorder(int argc , char **argv);
int main(int argc , char **argv);
#endif