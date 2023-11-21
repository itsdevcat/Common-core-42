/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 14:34:23 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:38:49 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;

	dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, (char *)s, ft_strlen(s) + 1);
	return (dup);
}

/* int	main(void)
{
	char	*s1 = "abcdefghiklmn";
	char	*s2;

	s2 = ft_strdup(s1);
	printf("%s\n", s2);
	free(s2);
	return (0);
}
 */