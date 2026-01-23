/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 11:50:56 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/20 16:59:15 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
/*
void	funcion(unsigned int i, char *c)
{
	if (i % 2 == 1)
	{
		*c = ft_toupper(*c);
	}
	else
		*c = ft_tolower(*c);
}
*/
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char	s[] = "Hola mundo";

	ft_striteri(s, funcion);
	printf("%s\n", s);
	return (0);
}
*/