#include <stdlib.h>
#include <stdio.h>
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
 t_list *node;
    t_list *lst;

    lst = ft_lstnew("9");
    ft_lstadd_front(&lst, ft_lstnew("4"));

int main()
{
    t_list *node;
    t_list *lst;

    lst = ft_lstnew("9");
    ft_lstadd_front(&lst, ft_lstnew("4"));

        while (lst)
        {
            printf("%s",(char *)lst ->content);
            lst = lst ->next;
        }
    while (lst != NULL)
    {
        node = lst;
        lst = lst ->next;
        free(node);
    }
}