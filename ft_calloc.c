/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/17 13:48:34 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 15:02:20 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
int	main(void)
{
	int	*ptr;
	int	i;

	ptr = (int *)ft_calloc(5, sizeof(int));
	ptr[0] = 12;
	ptr[1] = 13;
	ptr[2] = 14;
	ptr[3] = 15;
	ptr[4] = 16;
	while (i < 5)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
	return (0);
}
*/