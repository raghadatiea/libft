/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 14:11:50 by ratieh            #+#    #+#             */
/*   Updated: 2026/09/29 14:51:17 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#define _DEFAULT_SOURCE
#include <bsd/string.h>
#include <stdio.h>*/
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	if (c == '\0')
	{
		s += ft_strlen(s);
		return ((char *)s);
	}
	while (*s)
	{
		if (*s == c)
			p = ((char *)s);
		s++;
	}
	if (*p == c)
		return (p);
	return (NULL);
}
/*int main()
{
        char *src ="hel\0loo";
        char *p ; 
	p = ft_strrchr(src,'u');
        printf("%p", p);
	printf("%p", strrchr(src,'u'));

}*/
