#include <stdio.h>
#include "hedear.h"
 #include <stdio.h>
#include <stdlib.h>
  
 
int main(int argc , char **argv)
{
    if(argc == 1)
        return 0;
    if(check(argc , argv) == -1 || check_dup(argc , argv) == -1)
    {
        write(2,"Error\n",6);
        return 0;
    }
    check_algo_with_disorder(argc , argv);
    return 0;
}

// #include <stdlib.h>
// #include <stdio.h>
// #include "hedear.h"
// void print_nodes(stack *head)
// {
//     while (head)
//     {
//         printf ("\nnb : %d",head -> nb);
//         head = head -> next;
//     }
// }

// void	free_nodes(stack *head)
// {
// 	stack	*tmp;

// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}
// }
// void	free_nodes2(stack *head)
// {
// 	stack	*tmp;

// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}
// }

// int	main(void)
// {
// 	stack	*a;
// 	stack	*b;
// 	stack	*c;
// 	stack	*d;
// 	stack	*e;
// 	stack	*f;
// 	stack	*g;
// 	stack	*h;
// 	stack	*i;

// 	a = malloc(sizeof(stack));
// 	b = malloc(sizeof(stack));
// 	c = malloc(sizeof(stack));
// 	d = malloc(sizeof(stack));
// 	e = malloc(sizeof(stack));
// 	f = malloc(sizeof(stack));
// 	g = malloc(sizeof(stack));
// 	h = malloc(sizeof(stack));
// 	i = malloc(sizeof(stack));

// 	if (!a || !b || !c || !d || !e || !f || !g || !h || !i)
// 		return (1);

// 	a->nb = 5;
// 	b->nb = 2;
// 	c->nb = 8;
// 	d->nb = 1;
// 	e->nb = 9;
// 	f->nb = 4;
// 	g->nb = 7;
// 	h->nb = 3;
// 	i->nb = 6;

// 	a->next = b;
// 	b->next = c;
// 	c->next = d;
// 	d->next = e;
// 	e->next = f;
// 	f->next = g;
// 	g->next = h;
// 	h->next = i;
// 	i->next = NULL;

// 	res_from_stack_A(&a);
// 	print_nodes(a);
// 	free_nodes(a);
// 	return (0);
// }