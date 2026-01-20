/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:21:05 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 18:16:57 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	x;
	size_t	y;
	size_t	z;
	size_t	size_set;
	char	*ptr;

	x = 0;
	y = 0;
	z = ft_strlen(s1) -1;
	size_set = ft_strlen(set);
	while (x < size_set)
	{
		if (set[x] == s1[y])
		{
			x = 0;
			y++;
		}
		else
			x++;
	}
	x = 0;
	while (x < size_set)
	{
		if (set[x] == s1[z])
		{
			x = 0;
			z--;
		}
		else
			x++;
	}
	ptr = malloc(z - y);
	if (!ptr)
		return (NULL);
	x = 0;
	while (y + x <= z)
	{
		ptr[x] = s1[y + x];
		x++;
	}
	ptr[z] = '\0';
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