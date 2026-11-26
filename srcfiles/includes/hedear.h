#ifndef HEDEAR_H
#define HEDEAR_H
 
#include <unistd.h>
#include <stdlib.h>
typedef struct list{
    int nb;
    int index;
    struct list *next;
}stack;
 
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
float compute_disorder(stack *node);
int check(int nb , char **str);
long ft_atoi(char *str);
int is_intger(char *str);
int check_dup(int nb , char **str);
void pa(stack **head , stack **head1);
void pb(stack **head , stack **head1);
void ra(stack **head);
void rb(stack **head);
void rr(stack **head , stack **head1);
void rra(stack **head);
void rrb(stack **head);
void rrr(stack **head , stack **head1);
void sa(stack **head);
void sb(stack **head);
void ss(stack **head , stack **head1);
int is_sorted(stack *head);
stack *return_min(stack *head);
void ft_putstr(char *str);
int count_nodes(stack *head);
int index_min(stack *head);
void simple_algo (stack **list);
void sort_three(stack **head);
void  sort_two(stack **head);
void quick_sort(stack **s_a , stack **s_b  , int start , int end);
stack	*ft_lstnew(int n);
stack	*ft_lstlast(stack *lst);
void	ft_lstadd_back(stack **lst, stack *new);
stack *return_nodes(int argc , char **argv );
void check_algo_with_disorder(int argc , char **argv);
int main(int argc , char **argv);
#endif