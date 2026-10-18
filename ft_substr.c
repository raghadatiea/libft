/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/04 17:19:51 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/04 17:45:52 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*str;
	size_t		i;

	str = NULL;
	i = 0;
	if (s == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	while (i < len && s[start + i])
	{
		str[i] = s[start + i];
		i++;
	}
	str[i + start] = '\0';
	return (str);
}
/*int main()
{
	char *s = "hello";
	char *p = ft_substr(s, 1, 2);
	printf("%s", p);
}*/
