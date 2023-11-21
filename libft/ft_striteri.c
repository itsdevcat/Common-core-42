/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:10:34 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/09 13:56:49 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void ft_iter(unsigned int i, char *s) 
{
	*s += i;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}
/*
int	main(void)
{
	char s[] = "0000000000";
	
	ft_striteri(s, ft_iter);
	printf("%s\n", s);
	return (0);
}*/