/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:19:33 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 12:26:48 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	free_memory_delone(void *ptr)
{
	free(ptr);
}

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}
/*
int	main(void)
{
	t_list	**cabecera;
	t_list	*l1;
	t_list	*l2;
	char	s1[] = "hola";
	char	s2[] = "mundo";
	char	*s3;
	int		i;

	i = 0;
	s3 = malloc(6);
	if (!s3)
		return (0);
	while (s2[i])
	{
		s3[i] = s2[i];
		i++;
	}
	s3[i] = '\0';
	cabecera = malloc(sizeof (t_list *));
	if (!cabecera)
		return (0);
	l1 = ft_lstnew(s1);
	l2 = ft_lstnew(s3);
	*cabecera = l2;
	ft_lstadd_front(cabecera, l1);
	ft_lstdelone(ft_lstlast(*cabecera), free_memory_delone);
	printf("%s\n", (char *)(*cabecera)->content);
	return (0);
}
*/