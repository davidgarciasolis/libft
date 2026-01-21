/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 10:20:47 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/21 13:12:02 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*nodo;

	nodo = malloc(sizeof(t_list));
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
/*
int	main(void)
{
	char	content[] = "Hola mundo";
	t_list	*nodo;

	nodo = ft_lstnew(content);
	printf("%s\n", (char *)nodo->content);
	return (0);
}
*/