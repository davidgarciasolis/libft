/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 11:18:01 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 14:34:54 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	char	letter;

	letter = (char)c;
	i = ft_strlen(s);
	while (i)
	{
		if (s[i] == letter)
		{
			return ((char *)&s[i]);
		}
		i--;
	}
	if (s[i] == letter)
		{
			return ((char *)&s[i]);
		}
	return (NULL);
}
/*
int	main(void)
{
	const char s[] = "teste";
	char	*p;
	int	c;

	c = '\0';
	p = ft_strrchr(s, c);
	printf("%p\n", p);
	return (0);
}
*/