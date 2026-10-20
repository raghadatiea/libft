/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 14:18:18 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/04 15:16:51 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;

	a = NULL;
	a = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (a == NULL)
	{
		return (NULL);
	}
	ft_memcpy(a, s, ft_strlen(s) + 1);
	return (a);
}
/*int main()
{
	char *i= "hello";
	char *p = ft_strdup(i);
	printf("%s", p);
	free(p);
	
}*/
