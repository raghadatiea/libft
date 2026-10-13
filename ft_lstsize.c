#include <stdio.h>
#include <stdlib.h>
typedef struct s_list
{
    void *content;
    struct s_list *next;
    
}t_list;
void ft_lstadd_front(t_list **lst, t_list *new)
{
     new -> next = *lst;
     *lst = new;

}
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
unsigned int ft_lstsize(t_list *lst)
{
    unsigned int count;

    count = 0;
    while(lst)
    {
        count++;
        lst = lst -> next;
    }
    return (count);
}
int main()
{
    t_list *lst;
    lst = ft_lstnew("9");
    ft_lstadd_front(&lst, ft_lstnew("4"));
    printf("%u",(ft_lstsize(lst)));
}
