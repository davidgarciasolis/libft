/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 18:18:10 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/20 18:27:13 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

size_t	count_word(char const *s, char c)
{
	size_t	x;
	size_t	num_element;

	x = 0;
	num_element = 0;
	while (s[x] == c)
		x++;
	while (s[x])
	{
		while (s[x] && s[x] != c)
			x++;
		while (s[x] && s[x] == c)
			x++;
		num_element++;
	}
	return (num_element);
}

size_t	stringlen(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	return (i);
}

void	free_memory(char **ptr, int y)
{
	while (y)
		free(ptr[--y]);
	free(ptr);
}

int	duplicate_word(char	**ptr, char const *s, char c)
{
	size_t	x;
	size_t	y;
	size_t	size_word;

	x = 0;
	y = 0;
	while (s[x] == c)
		x++;
	while (s[x])
	{
		size_word = stringlen(&s[x], c);
		ptr[y] = (char *)malloc(size_word + 1);
		if (!ptr[y])
		{
			free_memory(ptr, y);
			return (1);
		}
		ft_strlcpy(ptr[y], &s[x], size_word);
		x += size_word;
		while (s[x] && s[x] == c)
			x++;
		y++;
	}
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	size_t	i;

	i = count_word(s, c);
	ptr = malloc(i * sizeof(char *) + 1);
	if (!ptr)
		return (NULL);
	if (duplicate_word(ptr, s, c))
		return (NULL);
	ptr[i] = NULL;
	return (ptr);
}
/*
int	main(void)
{
	char	s[] = "     Hola     mundo    ";
	char	c = ' ';
	char	**ptr;
	int		i;

	i = 0;
	ptr = ft_split(s, c);
	while (ptr[i])
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}
*/