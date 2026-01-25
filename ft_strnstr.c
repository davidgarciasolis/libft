/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 12:43:39 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/25 11:01:52 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	x;
	size_t	y;

	x = 0;
	if (ft_strlen(little) == 0)
	{
		return ((char *)big);
	}
	while (big[x] && x < len)
	{
		y = 0;
		while (big[x + y] == little[y] && x + y < len)
		{
			y++;
			if (little[y] == '\0')
			{
				return ((char *)&big[x]);
			}
		}
		x++;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char big[] = "Foo Bar Baz";
	const char little[] = "Bar";
	char	*ptr;

	ptr = ft_strnstr(big, little, 5);
	printf("%s\n", ptr);
	return (0);
}
*/