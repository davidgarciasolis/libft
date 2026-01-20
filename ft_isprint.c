/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:03:03 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/14 11:27:32 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d\n", ft_isprint(22));
	printf("%d\n", ft_isprint(52));
	return (0);
}
*/