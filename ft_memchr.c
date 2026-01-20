/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:17:18 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:03:21 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	const char	*p;

	i = 0;
	p = (const char *)s;
	while (p[i] && i < n)
	{
		if (p[i] == c)
		{
			return ((void *)&p[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	word[] = "Hola mundo";
	int	c;
	size_t	n;
	const void *s;
	void	*p;

	c = 'm';
	s = word;
	p = ft_memchr(s, c, n);
	printf("%s\n", (char *)p);
	return (0);
}
*/