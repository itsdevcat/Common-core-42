/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:18:32 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/13 14:10:36 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countwords(const char *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 1;
	while (s[i] && s[i] == c)
		i++;
	if (s[i] == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != '\0' && s[i + 1] != c)
		{
			word++;
		}
		i++;
	}
	return (word);
}

static int	word_size(const char *s, int i, char c)
{
	int	size;

	size = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		words;
	int		i;
	int		j;

	i = 0;
	j = 0;
	words = countwords(s, c);
	new = (char **)malloc((words + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	if (words == 0)
	{
		new[0] = NULL;
		return (new);
	}
	while (s[i] && j < words)
	{
		while (s[i] && s[i] == c)
			i++;
		new[j] = ft_substr(s, i, word_size(s, i, c));
		i += word_size(s, i, c);
		j++;
	}
	return (new);
}
/*
int main()
{
	char **strings = ft_split("abcdaaaaaaefgahija", 'a');

	printf("%s\n", strings[0]);
	printf("%s\n", strings[1]);
	printf("%s\n", strings[2]);
}*/