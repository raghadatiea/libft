/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ratieh <raghadatiea2003@gmail.com>         #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026-10-15 16:10:48 by ratieh            #+#    #+#             */
/*   Updated: 2026-10-15 16:10:48 by ratieh           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>*/
#include <stdlib.h>

size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] && s[i] != c)
			{
				i++;
			}
		}
	}
	return (count);
}

size_t	copy_word(char **p, char const *start, size_t word_len, size_t j)
{
	p[j] = malloc(word_len + 1);
	if (p[j] == NULL)
		return (0);
	ft_strncpy(p[j], start, word_len);
	p[j][word_len] = '\0';
	return (1);
}

char	**free_all(char **p, size_t j)
{
	while (j > 0)
	{
		j--;
		free (p[j]);
	}
	free (p);
	return (NULL);
}

char	**cpy_fill(char **p, char const *s, char c)
{
	size_t	start;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			if (!copy_word(p, s + start, i - start, j))
				return (free_all(p, j));
			j++;
		}
	}
	p[j] = NULL;
	return (p);
}

char	**ft_split(char const *s, char c)
{
	char	**p;

	if (!s)
		return (NULL);
	p = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!p)
		return (NULL);
	return (cpy_fill(p, s, c));
}

/*int main()
{
    char **str = ft_split("hello im here",' ');
    int i = 0;
    while(str[i])
    {
        printf("%s\n", str[i]);
        free(str[i]);
        i++;
        
    }
    free(str);

}*/