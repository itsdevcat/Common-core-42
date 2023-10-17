/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:10:50 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/11 17:17:14 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		return (ft_putstr_fd("-2147483648", fd));
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	ft_putchar_fd(n + '0', fd);
}
/*
int	main(void)
{
	int	fd;
	
	fd = open("caralho.txt", O_WRONLY | O_CREAT, 0666);
	if (fd == -1)
	{
		perror("Erro ao abrir o arquivo\n");
		return (1);
	}
	ft_putnbr_fd(310899, fd);
	close (fd);
	printf("Caracteres gravados no arquivo.\n");
	return (0);
}*/