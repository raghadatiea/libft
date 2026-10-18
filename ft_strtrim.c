/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 19:05:39 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 19:05:39 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"
/*#include <string.h>
#include <stdio.h>*/
size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	return (start);
}

size_t	get_end(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0 && ft_strchr(set, s1[end - 1]))
		end--;
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = get_start(s1, set);
	end = get_end(s1, set);
	str = malloc(end - start + 1);
	if (!str)
		return (NULL);
	ft_strncpy(str, s1 + start, s1[end - start]);
	str[end - start + 1] = '\0';
	return (str);
}
/*int main()
{
    char *s1 = "   Hello, World!   ";
    char *set = " ";
    char *trimmed = ft_strtrim(s1, set);
    if (trimmed)
    {
        printf("%s\n", trimmed);
        free(trimmed);
    }
}*/
