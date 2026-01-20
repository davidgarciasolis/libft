/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:31:43 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/12 12:46:05 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(int c)
{
	if ((c > 47 && c < 58) || (c > 64 && c < 91) || (c > 96 && c < 123))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("%d\n",ft_isalnum('0'));
	printf("%d\n",ft_isalnum('a'));
	printf("%d\n",ft_isalnum('A'));
	printf("%d\n",ft_isalnum('-'));
	return (0);
}
*/
