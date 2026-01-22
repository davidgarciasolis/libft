/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 16:05:23 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 19:03:59 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	size;
	char	*ptr;
	size_t	x;
	size_t	y;

	size = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	x = 0;
	y = 0;
	while (s1[x])
	{
		ptr[x] = s1[x];
		x++;
	}
	while (s2[y])
	{
		ptr[x + y] = s2[y];
		y++;
	}
	ptr[x + y] = '\0';
	return (ptr);
}