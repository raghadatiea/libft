/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 15:02:37 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 15:02:37 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include<string.h>
#include<stdio.h>*/
#include <stdlib.h> 
#include "libft.h"

size_t	count_digits(long num)
{
	size_t	count;

	count = 0;
	if (num <= 0)
		count++;
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		num_of_digits;
	char		*str;
	long		num;

	num = n;
	num_of_digits = count_digits(num);
	str = (char *)malloc(count_digits(num) + 1);
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		--num_of_digits;
		str[num_of_digits] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
	str[num_of_digits + 1] = '\0';
}
/*int main()
{
	int n = -12345;
	char *str = ft_itoa(n);
	if (str)
	{
		printf("%s\n", str);
		free(str);
	}
	return 0;
}*/
