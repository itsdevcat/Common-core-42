/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:18:32 by cfranco-          #+#    #+#             */
/*   Updated: 2023/11/21 11:43:53 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char	**s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i++;
	}
	free (s);
}

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
	int		i;
	int		j;

	i = 0;
	j = 0;
	new = (char **)malloc((countwords(s, c) + 1) * sizeof(char *));
	if (!new)
		return (NULL);
	while (s[i] && j < countwords(s, c))
	{
		while (s[i] && s[i] == c)
			i++;
		new[j] = ft_substr(s, i, word_size(s, i, c));
		if (new[j] == NULL)
		{
			ft_free(new);
			return (NULL);
		}
		i = i + word_size(s, i, c);
		j++;
	}
	new[countwords(s, c)] = NULL;
	return (new);
}
 
/* int main(void)
{
	char **strings = ft_split("0catarina0ola0adeus0anatiefixe0", '0');
	int i = 0;

	while (strings[i])
    {
        printf("%s\n", strings[i]);
        i++;
    }
	return (0);
}  */

