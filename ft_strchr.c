/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:50:55 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 14:37:21 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char	letter;

	letter = (char)c;
	while (*s)
	{
		if (*s == letter)
		{
			return ((char *)s);
		}
		s++;
	}
	if (*s == letter)
		{
			return ((char *)s);
		}
	return (NULL);
}
/*
int	main(void)
{
	char	s[] = "Hola mundo";
	char	c;
	char	*p;

	c = 's';
	p = ft_strchr(s, c);
	printf("%s\n", p);
	return (0);
}
*/