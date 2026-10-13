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
int main()
{
char *alp = "okic";
char *content = alp;
 t_list *node = ft_lstnew(content);
 if(!node)
    return (1);
 printf("%s",(char *)node -> content);
 free(node);

}
