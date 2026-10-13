#include<stdio.h>
#include <stdlib.h>
typedef struct s_list
{
    void *content;
    struct s_list *next;
    
}t_list;
t_list *ft_lstnew(void *content)
{
    t_list *new_node;

    new_node = (t_list *)malloc(sizeof(t_list));
    if(!new_node)
        return (NULL);
    new_node -> content = content;
    new_node -> next = NULL;
    return (new_node);
}
t_list *ft_lstlast(t_list *lst)
{
    if (!lst)
        return(NULL);
    
while (lst -> next )
{
    lst = lst ->next;

}
return(lst);

}