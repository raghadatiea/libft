/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 15:45:42 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 15:45:42 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
//#include <stdio.h>
t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*int main()
{
char *alp = "okic";
char *content = alp;
 t_list *node = ft_lstnew(content);
 if(!node)
    return (1);
 printf("%s",(char *)node -> content);
 free(node);

}*/
