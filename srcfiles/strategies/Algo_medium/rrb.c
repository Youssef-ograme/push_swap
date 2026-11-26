#include "hedear.h"                    
static t_indx	*last_node(t_indx *s_b)           
{                                         
                                          
	if (!s_b)                            
		return (NULL);                    
	while (s_b->next != NULL)            
		s_b = s_b->next;                
	return (s_b);                        
}                                         
                                          
static t_indx	*llast_node(t_indx *s_b)          
{                                         
                                          
   t_indx *last;                           
   last = last_node(s_b);                
	if (!s_b)                            
		return (NULL);                    
	while (s_b->next != last)            
		s_b = s_b->next;                
	return (s_b);                        
}                                         
                                          
void rrb_index(t_indx **s_b)                     
{                                         
                                          
   if(!s_b || !(*s_b) || !(*s_b)->next)
       return ;                           
   t_indx *last1;                          
   t_indx *last2;                          
   last1 = last_node(*s_b);              
   last2 = llast_node(*s_b);             
   last1 -> next = (*s_b);               
   (*s_b) = last1;                       
   last2 -> next = NULL;   
   write (1,"rrb\n",4);                                                 
}      