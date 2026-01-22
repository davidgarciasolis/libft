/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 11:21:52 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 12:35:20 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*d;
	char		*s;

	d = (char *)dest;
	s = (char *)src;
	if (dest || src)
		if (d > s)
		{
			while (n > 0)
			{
				d[n - 1] = s[n - 1];
				n--;
			}
		}
		else
		{
			ft_memcpy(dest, src, n);
		}
	else
		return (NULL);
	return (dest);
}
/*
int	main(void)
{
	unsigned char src[] = "Hola mundo";

	ft_memmove(src, (src + 5), 5);
	printf("%s\n", src);
	return (0);
}
*/