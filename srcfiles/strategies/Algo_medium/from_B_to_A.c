#include "hedear.h"
static int find_pose(t_indx *list , int target)
{
    int pose;
    pose = 0;
    while (list && list ->index != target)
    {
        pose++;
        list = list -> next;
    }
    return pose;
}
static void bring_to_top(t_indx **b, int pose, int size)
{
    int i;
    i = 0;
    if (pose <= size / 2)
        while (i++ < pose)
            rb_index(b);
    else
        while (i++ < size - pose)
            rrb_index(b);
}

void add_finish (stack **head , t_indx *stack_a)
{
	stack *new;
	new = *head;

	while (new && stack_a)
	{
		new -> nb = stack_a ->nb;
		new = new -> next;
		stack_a = stack_a -> next;
	}
}

void res_from_stack_A(stack **list)
{
    t_indx *res_stack_b;   
    t_indx *stack_a = NULL;
    int total;
    int pose;
    int size;

    res_stack_b = res_from_stack_B(*list,NULL,&total);
    size = total;
    total -= 1;
    while (total >= 0)
    {
        pose = find_pose(res_stack_b , total);
        bring_to_top(&res_stack_b ,pose ,size);
        pa_index(&stack_a ,&res_stack_b);
        total--;
        size--;
    }
	add_finish(list , stack_a);
}


// #include <stdio.h>
// void print_nodes(stack *head)
// {
//     while (head)
//     {
//         printf ("\nnb : %d",head -> nb);
//         head = head -> next;
//     }
// }
// #include <stdlib.h>
// #include <stdio.h>
// #include "hedear.h"

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
	
// 	free_nodes(a);
// 	return (0);
// }