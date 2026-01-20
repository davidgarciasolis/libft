/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:06:24 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/20 18:28:47 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	num_count(int n)
{
	int	i;

	i = 0;
	while (n / 10 > 0)
	{
		n /= 10;
		i++;
	}
	i++;
	return (i);
}

void	num_converter(char *ptr, int n, int size)
{
	while (n / 10 > 0)
	{
		ptr[size] = (n % 10) + '0';
		size--;
		n /= 10;
	}
	ptr[size] = n + '0';
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		signo;
	size_t	size;

	signo = 1;
	size = 0;
	if (n == -2147483648)
		return ("-2147483648");
	if (n < 0)
	{
		n *= -1;
		signo = -1;
		size += 1;
	}
	size += num_count(n);
	ptr = malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	size--;
	num_converter(ptr, n, size);
	if (signo == -1)
		ptr[0] = '-';
	return (ptr);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-214748348));
	return (0);
}
*/