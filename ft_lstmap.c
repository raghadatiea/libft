t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *))
{
    t_list *new_lst;
    t_list *new_node;
    void    *content;

    new_lst = NULL;
    while (lst)
    {
        content = f(lst -> content);
        new_node = ft_lstnew(content);
        if (!new_node)
        {
            del (content);
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst,new_node);
        lst = lst -> next;
    }
    return(new_lst);
    }
}