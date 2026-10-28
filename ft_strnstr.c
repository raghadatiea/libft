/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 15:21:59 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 16:07:50 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (little[j] == '\0')
	{
		return ((char *)big);
	}
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (((i + j) < len && (little[j] != '\0') && big[i + j] == little[j]))
		{
			j++;
		}
		if (little[j] == '\0')
		{
			return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
/*#include <stdio.h>
int main()
{

		char    *big = "hello";
		char *little = "llo";
		printf("%s",ft_strnstr(big ,little, 6));
}*/
