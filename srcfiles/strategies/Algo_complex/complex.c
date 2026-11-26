 #include <stdlib.h>
  
#include <stdio.h>
 typedef struct list{
    int nb;
    int index;
    struct list *next;
}stack;

int great_nb(stack *s_a)
{
	int max;
	stack *node1;

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
static stack	*ft_lstlast(stack *lst)
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
static void	ft_lstadd_back(stack **lst, stack *new)
{
	stack	*last;

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
static stack	*ft_lstnew(int n)
{
	stack	*new;

	new = malloc(sizeof(stack));
	if (!new)
		return (NULL);
	new-> nb = n;
	new -> index = 0;
	new->next = NULL;
	return (new);
}
static stack *return_nodes(int argc , char **argv )
{
    stack *res;
    stack *node;
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
static int count_nodes(stack *head)
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
// static stack *get_node(stack  *head , int nb)
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
int *create_arr(stack *head , int x)
{
	stack *node;
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
	stack *temp;
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
 
void get_lcd(stack **s_a   )
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
   
    stack *s_a;
     
    s_a =  return_nodes(argc ,argv);
     get_lcd(&s_a );
   
     return 0;
}
 