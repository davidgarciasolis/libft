/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:18:01 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:07:08 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i--)
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
			s--;
		}
	}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "Hola mundo";
	char	*p;
	int	c;

	c = 's';
	p = ft_strrchr(s, c);
	printf("%s\n", p);
	return (0);
}
*/