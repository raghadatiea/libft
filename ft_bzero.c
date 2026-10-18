/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/27 15:18:50 by ratieh            #+#    #+#             */
/*   Updated: 2026/09/29 18:14:56 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = '\0';
		i++;
	}
}
/*int   main()
{
        char    s[] = "12345";
        bzero(s+2, 2);
        printf("%s", s);
	ft_bzero(s+2, 2);
        printf("%s", s);
}*/
