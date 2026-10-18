/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/30 17:04:32 by ratieh            #+#    #+#             */
/*   Updated: 2026/09/30 17:52:48 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
int	ft_atoi(const char *nptr)
{
	int		i;
	int		sign;
	int		res;
	char	*p;

	i = 0;
	sign = 1;
	res = 0;
	p = (char *)nptr;
	while (p[i] == ' ' || ((p[i]) >= 9 && p[i] <= 13))
	{
		i++;
	}
	if (p[i] == '-' || p[i] == '+')
	{
		if (p[i] == '-')
			sign *= -1;
		i++;
	}
	while (p[i] >= '0' && p[i] <= '9')
	{
		res = res * 10 + (p[i] - '0');
		i++;
	}
	return (res * sign);
}
/*int main()
{
	char *num = "   \n-1234";
	printf("%d", ft_atoi(num));
}*/
