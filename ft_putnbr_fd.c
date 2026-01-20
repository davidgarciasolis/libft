/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davgarc4 <davgarc4@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:44:02 by davgarc4          #+#    #+#             */
/*   Updated: 2026/01/20 16:57:38 by davgarc4         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*s;
	int		size;

	s = ft_itoa(n);
	size = ft_strlen(s);
	write(fd, s, size);
}
/*
int	main(void)
{
	int	fd;
	int	n;
	
	n = 22;
	fd = open("tmp.txt", O_WRONLY | O_CREAT, 00755);
	ft_putnbr_fd(n, fd);
	close(fd);
	return (0);
}
*/