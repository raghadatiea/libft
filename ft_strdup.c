/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:17:45 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:17:51 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;

	if (!s)
		return (NULL);
	a = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!a)
		return (NULL);
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
