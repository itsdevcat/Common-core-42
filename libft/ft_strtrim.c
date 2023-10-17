/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 16:35:22 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/13 14:58:08 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len > i && ft_strchr(set, s1[len]))
		len--;
	new = ft_substr(s1, i, len - i);
	if (!new)
		return (NULL);
	return (new);
}
/*
int	main(void)
{
	char	*trimmed;
	
	trimmed = ft_strtrim("lorem \n ipsum \t dolor \n sit \t amet", " ");
	printf("%s\n", trimmed);
	return (0);
}*/