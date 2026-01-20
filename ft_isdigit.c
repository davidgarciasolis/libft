/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:30:01 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/12 12:31:00 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d", ft_isdigit('0'));
	printf("%d", ft_isdigit('9'));
	printf("%d", ft_isdigit('a'));
	printf("%d", ft_isdigit('A'));
	return (0);
}
*/
