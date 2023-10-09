/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 16:48:18 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/04 10:25:06 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*int	main(void)
{
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isascii('5'));
	printf("%d\n", ft_isascii(-2));
	printf("%d\n", ft_isascii(' '));
	return (0);
}*/
