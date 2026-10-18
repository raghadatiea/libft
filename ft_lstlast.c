/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 15:37:35 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 15:37:35 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<stdio.h>
#include <stdlib.h>*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
