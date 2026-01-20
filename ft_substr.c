/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:39:31 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/19 16:03:29 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*ptr;

	size = ft_strlen(&s[start]);
	if (size < len)
		ptr = malloc(size + 1);
	else
		ptr = malloc(len);
	if (!ptr)
		return (NULL);
	if (size < len)
		ft_strlcpy(ptr, &s[start], size + 1);
	else
		ft_strlcpy(ptr, &s[start], len);
	return (ptr);
}