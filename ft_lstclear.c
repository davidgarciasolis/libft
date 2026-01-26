/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:34:13 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/26 17:14:13 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	free_memory(void *ptr)
{
	free(ptr);
}

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (*lst)
	{
		while (*lst)
		{
			tmp = (*lst)->next;
			del((*lst)->content);
			free(*lst);
			*lst = tmp;
		}
		free(*lst);
	}
}
/*
int	main(void)
{
	t_list	**cabecera;
	t_list	*l1;
	t_list	*l2;
	char	s1[] = "hello";
	char	s2[] = "world";
	char	*s3;
	char	*s4;
	int		i;

	i = 0;
	s3 = malloc(6);
	s4 = malloc(6);
	if (!s3 || !s4)
		return (0);
	while (s2[i])
	{
		s3[i] = s1[i];
		s4[i] = s2[i];
		i++;
	}
	s3[i] = '\0';
	s4[i] = '\0';
	cabecera = malloc(sizeof (t_list *));
	if (!cabecera)
		return (0);
	l1 = ft_lstnew(s3);
	l2 = ft_lstnew(s4);
	*cabecera = l2;
	ft_lstadd_front(cabecera, l1);
	ft_lstclear(cabecera, free_memory);
	return (0);
}
*/