/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 11:43:01 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/13 13:13:29 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	ft_test(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (c);
	else
		return ('C');
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*new;

	i = 0;
	new = (char *)malloc(ft_strlen(s) + 1 * sizeof(char));
	if (!new)
		return (NULL);
	while (s[i])
	{
		new[i] = (*f)(i, s[i]);
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*int	main(void)
{
	char	*s1 = "Boas pessoal";
	char	*s2;

	s2 = ft_strmapi(s1, ft_test);
	printf("%s\n", s2);
	return (0);
}*/