/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:19:09 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:46:20 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	i = 0;
	src_len = ft_strlen(src);
	dest_len = 0;
	while (dest_len < size && dst[dest_len])
	{
		dest_len++;
	}
	if (size <= dest_len)
	{
		return (size + src_len);
	}
	while (size > dest_len + 1 + i && src[i] != '\0')
	{
		dst[i + dest_len] = src[i];
		i++;
	}
	dst[i + dest_len] = '\0';
	return (dest_len + src_len);
}
/*#include <stdio.h>
int main()
{
	char *src ="hello";
	char dest[20] = "world";
	size_t *s = ft_strlcat(dest, src, sizeof(dest));
	printf("%s",dest);

}*/
