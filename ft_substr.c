/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:39:31 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 16:17:53 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	size;
	char	*ptr;

	if (len == 0 || start >= ft_strlen(s))
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = '\0';
		return (ptr);
	}
	size = ft_strlen(&s[start]);
	if (size < len)
		ptr = malloc(size + 1);
	else
		ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		ft_strlcpy(ptr, "", size);
		return (ptr);
	}
	if (size < len)
	{
		ft_strlcpy(ptr, &s[start], size + 1);
		return (ptr);
	}
	else
	{
		ft_strlcpy(ptr, &s[start], len + 1);
		return (ptr);
	}
}