/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:49:57 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/22 19:22:19 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
	{
		lst = lst->next;
	}
	return (lst);
}
/*
int	main(void)
{
	t_list	**cabecera;
	t_list	*last;
	t_list	*l1;
	t_list	*l2;
	char	s1[] = "hola";
	char	s2[] = "mundo";
	

	cabecera = malloc(sizeof (t_list *));
	l1 = ft_lstnew(s1);
	l2 = ft_lstnew(s2);
	*cabecera = l2;
	ft_lstadd_front(cabecera, l1);
	last = ft_lstlast(l2);
	printf("%s\n", (char *)last->content);
	return (0);
}
*/