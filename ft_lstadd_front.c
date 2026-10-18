/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.C                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 19:22:45 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 19:22:45 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/
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
