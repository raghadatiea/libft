/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:19:29 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:28:23 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#define _DEFAULT_SOURCE
//#include <bsd/string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	if (!dst)
		return (0);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*int main()
{
	char *src ="hello";
	char dest[6];
	ft_strlcpy(NULL,NULL,6);
	printf("%s", dest);
}*/
