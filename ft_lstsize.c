/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 12:36:24 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/21 16:10:09 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	i;
	t_list	*ptr;

	i = 0;
	ptr = lst;
	while (ptr->next)
	{
		ptr = ptr->next;
		i++;
	}
	i++;
	return (i);
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
	printf("%d\n", ft_lstsize(*cabecera));
	return (0);
}
*/