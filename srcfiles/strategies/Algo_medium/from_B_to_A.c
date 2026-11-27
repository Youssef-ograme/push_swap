#include "hedear.h"
static int find_pose(t_stack *list , int target)
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
static void bring_to_top(t_stack **b, int pose, int size)
{
    int i;
    i = 0;
    if (pose <= size / 2)
        while (i++ < pose)
            rb(b);
    else
        while (i++ < size - pose)
            rrb(b);
}

void add_finish (t_stack **head , t_stack *stack_a)
{
	t_stack *new;
	new = *head;

	while (new && stack_a)
	{
		new -> nb = stack_a ->nb;
		new = new -> next;
		stack_a = stack_a -> next;
	}
}

void res_from_stack_A(t_stack **list)
{
    t_stack *res_stack_b;   
    t_stack *stack_a = NULL;
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
        pa(&stack_a ,&res_stack_b);
        total--;
        size--;
    }
	add_finish(list , stack_a);
}


// #include <stdio.h>
// void print_nodes(t_stack *head)
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

// void	free_nodes(t_stack *head)
// {
// 	t_stack	*tmp;

// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}
// }
// void	free_nodes2(t_stack *head)
// {
// 	t_stack	*tmp;

// 	while (head)
// 	{
// 		tmp = head->next;
// 		free(head);
// 		head = tmp;
// 	}
// }

// int	main(void)
// {
// 	t_stack	*a;
// 	t_stack	*b;
// 	t_stack	*c;
// 	t_stack	*d;
// 	t_stack	*e;
// 	t_stack	*f;
// 	t_stack	*g;
// 	t_stack	*h;
// 	t_stack	*i;

// 	a = malloc(sizeof(t_stack));
// 	b = malloc(sizeof(t_stack));
// 	c = malloc(sizeof(t_stack));
// 	d = malloc(sizeof(t_stack));
// 	e = malloc(sizeof(t_stack));
// 	f = malloc(sizeof(t_stack));
// 	g = malloc(sizeof(t_stack));
// 	h = malloc(sizeof(t_stack));
// 	i = malloc(sizeof(t_stack));

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