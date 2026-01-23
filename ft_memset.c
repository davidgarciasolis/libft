/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:30:45 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/14 12:32:47 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char			*p;
	size_t			i;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (s);
}

/*
int	main(void)
{
	char s[] = ("Hola mundo");
	int	i = 511;
	ft_memset(&i, 254, 1);
	printf("%d\n", i);
	return (0);
}
*/