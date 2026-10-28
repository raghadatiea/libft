/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 14:55:32 by ratieh            #+#    #+#             */
/*   Updated: 2026/10/28 14:55:40 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*a;

	if (size != 0 && nmemb > (size_t)-1 / size)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}
	ft_memset(a, 0, nmemb * size);
	return (a);
}
/*int main()
{
	char *p = ft_calloc(5,sizeof(char));
	printf("%d", p);
	int i = 0;
	while (i < 5)
	{
		printf("%d", p[i]);
		i++;
	}
	free(p);
}*/
