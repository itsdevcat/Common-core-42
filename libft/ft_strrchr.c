/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 15:30:50 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/13 14:47:45 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	strend;

	strend = ft_strlen(s);
	if (!s)
		return (NULL);
	while (strend >= 0)
	{
		if (s[strend] == (char)c)
			return ((char *)s + strend);
		strend--;
	}
	return (NULL);
}
/*
int	main(void)
{
	char	*str = "abcdefghiabc";
	char	*s = ft_strrchr(str, 'x');
	
	printf("%s\n", s);
	return (0);
}*/

/*The strrchr() function returns a pointer to the last occurrence of the 
character
       c in the string s.

RETURN VALUE
       The  s strrchr() functions return a pointer to the matched character
       or NULL if the character is not found.  The terminating null byte is  
	   considered
       part  of the string, so that if c is specified as '\0', these functions 
	   return a
       pointer to the terminator.

*/