/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 10:39:53 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 12:27:31 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	funcion_mapi(unsigned int i, char c)
{
	if (i % 2 == 1)
	{
		c = ft_toupper(c);
	}
	else
		c = ft_tolower(c);
	return (c);
}

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			size;
	unsigned int	i;
	char			*ptr;

	i = 0;
	size = ft_strlen(s);
	ptr = malloc(size + 1);
	if (!ptr)
	{
		return (NULL);
	}
	while (i < size +1)
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
/*
int	main(void)
{
	char const	s[] = "Hola mundo";
	char		*ptr;

	ptr = ft_strmapi(s, funcion_mapi);
	printf("%s\n", ptr);
	return (0);
}
*/