/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:18:21 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/18 17:42:07 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void delete_content(void *content)
{
    free(content);
}*/

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	(*del)(lst->content);
	free (lst);
}
/*
int	main(void)
{
	t_list *list = ft_lstnew(ft_strdup("Hello, World!"));

	printf("Conteúdo antes da deleção: %s\n", (char *)(list->content));
	ft_lstdelone(list, delete_content);
	printf("Conteúdo após a deleção: %s\n", (char *)(list->content));
	return (0);
}*/