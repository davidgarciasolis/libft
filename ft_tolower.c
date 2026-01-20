/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:38:46 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:07:13 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c += 'a' - 'A';
	}
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = 'a';
	c = ft_tolower(c);
	printf("%c\n", c);
	return (0);
}
*/