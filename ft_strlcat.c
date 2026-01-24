/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 13:04:14 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/24 17:29:49 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t    src_len;
    size_t    dst_len;
    
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + src_len);
	if (dst_len + src_len < size)
		ft_strlcpy(&dst[dst_len], src, src_len + 1);
	else
		ft_strlcpy(&dst[dst_len], src, size - dst_len);
    return (dst_len + src_len);
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