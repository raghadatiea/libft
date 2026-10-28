/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:18:38 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 15:18:42 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_strcpy(char *dest, const char *src, size_t location)
{
	size_t	i;

	i = 0;
	while (src[i])
	{
		dest[location] = src[i];
		i++;
		location++;
	}
	return (location);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	size_t	i;

	new_str = NULL;
	i = 0;
	if (!s1 || !s2)
	{
		return (NULL);
	}
	new_str = (char *)malloc(ft_strlen(s1)+ ft_strlen(s2) + 1);
	if (new_str == NULL)
		return (NULL);
	i = ft_strcpy(new_str, s1, 0);
	i = ft_strcpy(new_str, s2, i);
	new_str[i] = '\0';
	return (new_str);
}
/*int main()
{
	char *s1 = "hello";
       	char *s2 = "world";
	char *new = ft_strjoin(s1, s2);
	printf("%s", new);
}*/
