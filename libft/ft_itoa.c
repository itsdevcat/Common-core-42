/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 11:08:38 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:56:20 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countdigits(int n)
{
	int	total;

	total = 1;
	if (n < 0)
	{
		total++;
		n *= -1;
	}
	while (n > 9)
	{
		n = n / 10;
		total++;
	}
	return (total);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = countdigits(n) - 1;
	str = (char *)malloc((i + 2) * sizeof(char));
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	str[i + 1] = '\0';
	while (n > 9)
	{
		str[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	str[i] = (n % 10) + '0';
	return (str);
}
/*
int	main(void)
{
	char	*str;
	
	str = ft_itoa(0);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
