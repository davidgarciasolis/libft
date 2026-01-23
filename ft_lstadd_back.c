/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 13:13:25 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/23 11:21:02 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;
	
	if (new)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
		{
			*lst = new;
		}
	}
}
/*
int	main(void)
{
	t_list	**cabecera;
	t_list	*l1;
	t_list	*l2;
	char	s1[] = "hola";
	char	s2[] = "mundo";

	cabecera = malloc(sizeof (t_list *));
	l1 = ft_lstnew(s1);
	l2 = ft_lstnew(s2);
	*cabecera = l2;
	ft_lstadd_back(cabecera, l1);
	while ((*cabecera)->next)
	{
		printf("%s\n", (char *)(*cabecera)->content);
		*cabecera = (*cabecera)->next;
	}
	printf("%s\n", (char *)(*cabecera)->content);
	return (0);
}
*/