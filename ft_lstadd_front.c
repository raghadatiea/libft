/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:04:19 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:04:24 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*int main()
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
}*/
