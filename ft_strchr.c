/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 12:34:07 by ratieh            #+#    #+#             */
/*   Updated: 2026/09/29 14:10:23 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ch;

	ch = (unsigned char)c;
	if (ch == '\0')
	{
		s += ft_strlen(s);
		return ((char *)s);
	}
	while (*s)
	{
		if ((unsigned char)*s == ch)
			return ((char *)s);
		s++;
	}
	return (NULL);
}
/*int main()
{
	char *src ="hello";
	char *p = ft_strchr(src,'\0');
	printf("%c", *(p-1));
}*/
