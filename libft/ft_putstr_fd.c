/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 13:49:04 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/09 13:56:27 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
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
	ft_putstr_fd("Hello, peeps", fd);
	close (fd);
	printf("Caracteres gravados no arquivo.\n");
	return (0);
}*/