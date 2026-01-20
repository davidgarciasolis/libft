/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:39:15 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/20 15:50:19 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = ft_strlen(s);
	write(fd, s, i);
}
/*
int	main(void)
{
	char	s[] = "Hola mundo";
	int	fd;

	fd = open("tmp.txt", O_WRONLY |  O_CREAT, 00755);
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}
*/