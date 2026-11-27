#include "hedear.h"

static t_stack *creat_index (int rank , int nb)
{
    t_stack *new = malloc (sizeof (t_stack));
    if (!new)
        return NULL;
    new -> index = rank;
    new -> nb =  nb;
    new -> next = NULL;
    return new;
}

static void	ft_indexadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*current;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next)
		current = current->next;
	current->next = new;
}

t_stack *add_rank (t_stack *list)
{
    int rank;
    t_stack *head1 = list;
    t_stack *head2;
    t_stack *new;
    t_stack *new_nodes = NULL;
    while (head1)
    {
        head2 = list;
        rank = 0;
        while (head2)
        {
            if (head1->nb > head2 -> nb)
                rank++;
            head2 = head2 -> next;
        }
        new = creat_index(rank , head1->nb);
        if (!new)
            return (NULL);
        ft_indexadd_back(&new_nodes,new);
        head1 = head1 -> next;
    }
    return new_nodes;
}

// #include <stdio.h>
// void print_nodes(t_stack *head)
// {
//     while (head)
//     {
//         printf ("nb : %d index: %d\n",head -> nb , head -> index);
//         head = head -> next;
//     }
// }
// int main ()
// {
//     t_stack a = {5, NULL};
//     t_stack b = {2, NULL};
//     t_stack c = {8, NULL};
//     t_stack d = {1, NULL};

//     a.next = &b;
//     b.next = &c;
//     c.next = &d;
//     t_stack *res = add_rank(&a);
//     print_nodes(res);    
//     return (0);
// }