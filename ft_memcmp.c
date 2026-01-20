/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 13:11:53 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:03:28 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*p1;
	char	*p2;

	i = 0;
	p1 = (char *)s1;
	p2 = (char *)s2;
	while (p1[i] == p2[i] && i < n)
	{
		i++;
	}
	return (p1[i] - p2[i]);
}
/*
int	main(void)
{
	char s1[] = "Hola mundo";
	char s2[] = "Hola mundo";
	const void *p1;
	const void *p2;
	size_t	n;
	int	i;

	p1 = (const void *)s1;
	p2 = (const void *)s2;
	n = 10;
	i = ft_memcmp(p1, p2, n);
	printf("%d\n", i);
	return (0);
}
*/