/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:21:05 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/26 18:56:43 by davgarc4         ###   ########.fr       */
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
	end = ft_strlen(s1) - 1;
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

char	*generador_nulo(void)
{
	char	*ptr;

	ptr = malloc(1);
	if (!ptr)
		return (NULL);
	ptr[0] = '\0';
	return (ptr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	start;
	size_t	end;
	char	*ptr;

	if (!s1 || !set)
		return (NULL);
	start = find_start(s1, set);
	end = find_end(s1, set);
	if (start == ft_strlen(s1))
	{
		return (generador_nulo());
	}
	ptr = malloc(end - start + 2);
	if (!ptr)
		return (NULL);
	x = 0;
	while (start + x <= end)
	{
		ptr[x] = s1[start + x];
		x++;
	}
	ptr[x] = '\0';
	return (ptr);
}
/*
int	main(void)
{
	char	s1[] = "   \t  \n\n \t\t  \n\n\nHello \t ";
	char	set[] = " \n\t";
	char	*ptr;

	ptr = ft_strtrim(s1, set);
	printf("%s\n", ptr);
	return (0);
}
*/