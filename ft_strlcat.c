/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:04:14 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/16 10:32:35 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 0;
	while (dst[x] && x < size)
	{
		x++;
	}
	while (src[y] && x + y < size)
	{
		dst[x + y] = src[y];
		y++;
	}
	return (x + ft_strlen(src));
}
/*
int	main(void)
{
	char	dst [20] = "adios y hola";
	const char	src[] = "Hola mundo";
	size_t	size;
	size_t	i;

	size = 25;
	i = ft_strlcat(dst, src, size);
	printf("%zu\n", i);
	printf("%s\n", dst);
	return (0);
}
*/