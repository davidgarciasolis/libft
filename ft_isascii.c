/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:47:13 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:02:43 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int c)
{
	if (c > -1 && c < 128)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n", ft_isascii(19));
	printf("%d\n", ft_isascii(190));
	return (0);
}
*/