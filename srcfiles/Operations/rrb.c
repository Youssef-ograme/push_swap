#include "hedear.h"                    
static t_stack	*last_node(t_stack *s_b)           
{                                         
                                          
	if (!s_b)                            
		return (NULL);                    
	while (s_b->next != NULL)            
		s_b = s_b->next;                
	return (s_b);                        
}                                         
                                          
static t_stack	*llast_node(t_stack *s_b)          
{                                         
                                          
   t_stack *last;                           
   last = last_node(s_b);                
	if (!s_b)                            
		return (NULL);                    
	while (s_b->next != last)            
		s_b = s_b->next;                
	return (s_b);                        
}                                         
                                          
void rrb(t_stack **s_b)                     
{                                         
                                          
   if(!s_b || !(*s_b) || !(*s_b)->next)
       return ;                           
   t_stack *last1;                          
   t_stack *last2;                          
   last1 = last_node(*s_b);              
   last2 = llast_node(*s_b);             
   last1 -> next = (*s_b);               
   (*s_b) = last1;                       
   last2 -> next = NULL;                                                    
}      