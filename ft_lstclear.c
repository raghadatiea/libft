void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *temp;
    
    if (!temp)
        return;
    while (*lst)
    {
         temp = (*lst) ->next;
         ft_delone(*lst, del);
         *lst = temp;
    }
   
}