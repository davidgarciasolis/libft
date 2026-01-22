/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:21:05 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 16:26:33 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	find_start(char const *s1, char const *set)
{
	size_t	start;
	size_t	i;
	size_t	size_set;

	i = 0;
	start = 0;
	size_set = ft_strlen(set);
	while (i < size_set)
	{
		if (set[i] == s1[start])
		{
			i = 0;
			start++;
		}
		else
			i++;
	}
	return (start);
}

int	find_end(char const *s1, char const *set)
{
	size_t	end;
	size_t	i;
	size_t	size_set;

	i = 0;
	size_set = ft_strlen(set);
	end = ft_strlen(s1) -1;
	while (i < size_set)
	{
		if (set[i] == s1[end])
		{
			i = 0;
			end--;
		}
		else
			i++;
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	start;
	size_t	end;
	char	*ptr;

	start = find_start(s1, set);
	end = find_end(s1, set);
	ptr = malloc(end - start);
	if (!ptr)
		return (NULL);
	x = 0;
	while (start + x <= end)
	{
		ptr[x] = s1[start + x];
		x++;
	}
	ptr[end] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s1[] = "616480131469798320311561Hola mundo98196416416761654548";
	char	set[] = "0123456789";
	char	*ptr;

	ptr = ft_strtrim(s1, set);
	printf("%s\n", ptr);
	return (0);
}
*/