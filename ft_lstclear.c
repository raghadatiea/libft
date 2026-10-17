/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 15:33:31 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 15:33:31 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!temp)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_delone(*lst, del);
		*lst = temp;
	}
}
