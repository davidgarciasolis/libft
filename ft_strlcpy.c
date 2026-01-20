/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 12:10:31 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:04:47 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	const char	*s;
	char		*d;
	size_t		i;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	if (size != 0)
	{
		while (i < size && s[i])
		{
			d[i] = s[i];
			i++;
		}
		d[i] = '\0';
	}
	while (s[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	const char src[] = "Hola mundo";
	char dest[30] = "adioskjhskddfhksahf";
	const char src2[] = "Hola mundo";
	char dest2[30] = "adioskjhskddfhksahf";

	printf("%zu\n", strlcpy(dest, src, 20));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcpy(dest2, src2, 20));
	printf("%s\n", dest2);
	return (0);
}
*/