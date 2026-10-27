/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-27 17:58:10 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-27 17:58:10 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"
/*char to_upper(unsigned int index, char c)
{
    (void)index;
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    return (c);
}*/
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new_str;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	new_str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(i, s[i]);
		i++;
	}
	new_str[i] = '\0';
	return (new_str);
}
/*int main()
{
    char *s = "hello";
    char *result = ft_strmapi(s, to_upper);
    

    if (result)
    {
        printf("%s\n", result);
        free(result);
    }
    return 0;
}*/
