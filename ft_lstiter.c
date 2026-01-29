/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:17:21 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/29 20:43:49 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
void	ft_print(void *s)
{
	printf("%s\n", (char *)s);
}
*/
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*aux;
	t_list	*tmp;

	aux = lst;
	while (aux)
	{
		tmp = aux->next;
		f(aux->content);
		aux = tmp;
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
	ft_lstadd_front(cabecera, l1);
	ft_lstiter(*cabecera, ft_print);
	return (0);
}
*/