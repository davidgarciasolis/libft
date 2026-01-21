/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 11:18:56 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/21 13:10:50 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
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
	ft_lstadd_front(cabecera, l1);
	while ((*cabecera)->next)
	{
		printf("%s\n", (char *)(*cabecera)->content);
		*cabecera = (*cabecera)->next;
	}
	printf("%s\n", (char *)(*cabecera)->content);
	return (0);
}
*/