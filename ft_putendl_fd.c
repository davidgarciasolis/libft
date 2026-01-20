/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:50:44 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/20 16:57:29 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putendl_fd(char *s, int fd)
{
	int		size;
	char	f;

	f = '\n';
	size = ft_strlen(s);
	write (fd, s, size);
	write (fd, &f, 1);
}
/*
int	main(void)
{
	int		fd;
	char	s[] = "Hola mundo";
	
	fd = open("tmp.txt", O_WRONLY | O_CREAT, 00755);
	ft_putendl_fd(s, fd);
	close(fd);
	return (0);
}
*/