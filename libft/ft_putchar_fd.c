/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:30:57 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/12 15:34:01 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int	main(void)
{
	int	fd;
	
	fd = open("output.txt", O_WRONLY | O_CREAT, 0666);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo\n");
		return (1);
	}
	ft_putchar_fd('H', fd);
	ft_putchar_fd('i', fd);
	ft_putchar_fd('!', fd);
	close (fd);
	printf("Caracteres gravados no arquivo.\n");
	return (0);
}*/