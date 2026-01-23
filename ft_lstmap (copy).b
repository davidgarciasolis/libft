/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:29:42 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/23 13:00:37 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*aux;
	t_list	*tmp;
	void	*content;
	
	if  (!lst || !f || !del)
		return (NULL);
	new_lst = malloc(sizeof(t_list));
	if(!new_lst)
		return (NULL);
	aux = lst;
	while (aux)
	{
		tmp = aux->next;
		content = f(aux->content);
		if (content)
		{
			aux = ft_lstnew(content);
			if (!aux)
				{
					ft_lstclear(&new_lst, del);
					del(content);
				}
			ft_lstadd_back(&new_lst, aux);
		}
		else
		{
			del(aux->content);
			free(aux);
		}
		aux = tmp;
	}
	return (new_lst);
}
/*
int	main(void)
{
	return (0);
}
*/