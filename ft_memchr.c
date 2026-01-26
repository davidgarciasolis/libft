/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 12:17:18 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/26 17:16:19 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*p;
	char		letter;

	i = 0;
	letter = (char)c;
	p = (char *)s;
	while (i < n)
	{
		if (p[i] == letter)
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