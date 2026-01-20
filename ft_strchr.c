/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:50:55 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:04:09 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s++;
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