/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:06:24 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/24 18:39:55 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	num_count(long num)
{
	int	i;

	i = 0;
	while (num / 10 > 0)
	{
		num /= 10;
		i++;
	}
	i++;
	return (i);
}

void	num_converter(char *ptr, long num, int size)
{
	while (num / 10 > 0)
	{
		ptr[size] = (num % 10) + '0';
		size--;
		num /= 10;
	}
	ptr[size] = num + '0';
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		signo;
	size_t	size;
	long	num;

	signo = 1;
	size = 0;
	num = n;
	if (num < 0)
	{
		num *= -1;
		signo = -1;
		size += 1;
	}
	size += num_count(num);
	ptr = malloc(size * sizeof(char) + 1);
	if (!ptr)
		return (NULL);
	ptr[size] = '\0';
	size--;
	num_converter(ptr, num, size);
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