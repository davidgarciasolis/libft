/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 11:13:44 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 18:41:21 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(s) + 1;
	ptr = (char *)malloc(size);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, size);
	return (ptr);
}
/*
int	main(void)
{
	const char s[] = "Hola mundo";
	char	*ptr;

	ptr = ft_strdup(s);
	printf("%s\n", ptr);
	return (0);
}
*/