/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:10:33 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:10:36 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*p;

	if (!s)
		return (NULL);
	p = (unsigned char *)s;
	while (n > 0)
	{
		if (*p == (unsigned char)c)
		{
			return ((void *)p);
		}
		p++;
		n--;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{
	char *src ="hello";
	char *p =(char *)ft_memchr(NULL,'l', 5);
	if (!p)
		return (1);
	printf("%c", *(p));
}*/
