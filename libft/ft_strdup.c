/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:23 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/11 17:18:12 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	if (!s)
		return (NULL);
	dup = (char *)malloc((ft_strlen(s) +1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, (char *)s, ft_strlen(s) +1);
	return (dup);
}
/*
int	main(int ac, char **av)
{
	char	*s2 = ft_strdup(av[1]);

	(void)ac;	
	printf("%s", s2);
	free(s2);
	return (0);
}
*/