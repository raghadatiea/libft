/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 15:41:12 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 15:41:12 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*content;

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
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*void *add_x (void *content)
{
	return (ft_strjoin((char *)content, "x"));
}

void del(void *content)
{
	free((char *)content);
}
#include <stdio.h>
int main()
{
	t_list *newlst;
	t_list *a = ft_lstnew("hello");
	t_list *b = ft_lstnew("world");

	a -> next = b;
	printf("%s\n" , (char *)a -> content);
	printf("%s\n" , (char *)a -> next ->content);

	newlst = ft_lstmap(a, add_x,del);
	while (newlst)
	{
		printf("%s" , (char *)newlst-> content);
		newlst = newlst ->next;
	}	
}*/