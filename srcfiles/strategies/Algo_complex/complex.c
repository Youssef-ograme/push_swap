 #include <stdlib.h>
  
#include <stdio.h>
 typedef struct list{
    int nb;
    int index;
    struct list *next;
}t_stack;

int great_nb(t_stack *s_a)
{
	int max;
	t_stack *node1;

	max = s_a -> nb;
	node1 =  s_a;
	while (node1)
	{
 		if(max < node1 -> nb)	
			max = node1 -> nb;
		node1 = node1-> next;
	}
	return max;
}
int call_f(int nb)
{
	int call;
	call = 0;
	while(nb > 9)
	{
		call++;
		nb /=10;
	}
	return call + 1;
}
static t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
static long ft_atoi(char *str)
{
    int i;
    int kayn;
    long res;

    res = 0;
    kayn = 1;
    i = 0;
    while(str[i] == 32 ||  ((str[i] >= 9 && str[i] <= 13) && str[i] != '\0'))
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            kayn = -1;
        i++;
    }
    if(!(str[i] >= '0' && str[i] <= '9'))
        return (2147483648);
    while(str[i] >= '0' && str[i] <= '9')
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    if(!(str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
        return (2147483648);
    return res * (kayn);
}
static void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	t_stack	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	last->next = new;
}
static t_stack	*ft_lstnew(int n)
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
static t_stack *return_nodes(int argc , char **argv )
{
    t_stack *res;
    t_stack *node;
    res = NULL;
    int i;
    i = 1;
    while(i < argc)
    {
        node = ft_lstnew(ft_atoi(argv[i]));
        ft_lstadd_back(&res , node);
        i++;
    }
    return res;
} 
static int count_nodes(t_stack *head)
{
    int count;
    count = 0;
    while(head)
    {
        count++;
        head = head -> next;
    }
    return count;
}
// static t_stack *get_node(t_stack  *head , int nb)
// {
// 	int n;
// 	while(head )
// 	{
// 		n = head -> nb;
// 		if(n % 10 == nb)
// 			return head;
// 		head = head -> next;
// 	}
// 	return NULL;
// }
/**/
int *create_arr(t_stack *head , int x)
{
	t_stack *node;
	int size;
	size = count_nodes(head);
	int *arr;
	arr = malloc(size * sizeof(int));
	if(!arr)
		return NULL; 
	int n;
	int i;
	i = 0;
	node = head;
	t_stack *temp;
	temp = node;
	while(node)
	{
		n = node -> nb;
		while(x > 0)
		{
			n/=10;
			x--;
		}
		arr[i] = n % 10;
		i++;
		node = node -> next;
	}
	return arr;
}
 
void get_lcd(t_stack **s_a   )
{
	int max ;
	int call;
	int i;
	max = great_nb((*s_a));
	call = call_f(max);
	i = 0;
	int *arr[call];
	while(i < call)
	{
		arr[i] = create_arr((*s_a) , i);
		i++;
	}
	int j;
	i = 0;
	while(i < call)
	{
		j = 0;
		while((*s_a))
		{
			printf("%d\n",arr[i][j]);
			(*s_a) = (*s_a) -> next;
			j++;	
		}
		i++;

	}
}
int main(int argc , char **argv)
{
    if(argc == 1)
        return 0;
   
    t_stack *s_a;
     
    s_a =  return_nodes(argc ,argv);
     get_lcd(&s_a );
   
     return 0;
}
 