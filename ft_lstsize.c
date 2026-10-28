/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:10:00 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:10:05 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int		count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst -> next;
	}
	return (count);
}

/*int main()
{
    t_list *lst;
    lst = ft_lstnew("9");
    ft_lstadd_front(&lst, ft_lstnew("4"));
    printf("%u",(ft_lstsize(lst)));
}*/
