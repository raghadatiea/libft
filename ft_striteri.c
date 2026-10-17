/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 18:57:55 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 18:57:55 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdlib.h>
#include <stdio.h>*/
/*void	f(unsigned int index, char *c)
{
    (void)index;
    if (*c >= 'a' && *c <= 'z')
        *c -= 32;
}*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int main()
{
    char str[] = "hello";
    ft_striteri(str, f);
    printf("%s\n", str);
    return 0;
}*/