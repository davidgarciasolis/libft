/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:29:42 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/21 16:51:21 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	new_lst;
	t_list	aux;
	t_list	tmp;
	
	new_list = mallow(t_list *);
	aux = lst;
	while (aux)
	{
		tmp = aux->next;
		aux->content = f(aux->content);
		aux = tmp;
	}
	return (new_lst);
}