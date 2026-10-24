/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 13:14:15 by ratieh            #+#    #+#             */
/*   Updated: 2026/09/30 15:02:20 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;
	size_t			i;

	de = (unsigned char *) dest;
	sr = (unsigned char *)src;
	i = 0;
	if (de > sr)
	{
		while (n > 0)
		{
			n--;
			de[n] = sr[n];
		}
	}
	if (de < sr)
	{
		while (i < n)
		{
			de[i] = sr[i];
			i++;
		}
	}
	dest = de;
	return (dest);
}
/*int main()
{
	char	src1[9] = "hello";
	//char 	src2[9] = "hello";
	memmove(src1 + 2 , src1 , 2);	
	printf("%s\n",src1);

	//printf("%s\n",(char *)ft_memmove(src2 + 2 , src1 , 4));

}*/
