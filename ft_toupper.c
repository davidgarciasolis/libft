/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 10:33:14 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/16 10:46:11 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 'a' - 'A';
	}
	return (c);
}
/*
int	main(void)
{
	char	c;

	c = '-';
	c = ft_toupper(c);
	printf("%c\n", c);
	return (0);
}
*/
