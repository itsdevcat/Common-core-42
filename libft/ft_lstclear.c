/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:43:48 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 16:13:51 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void delete_content(void *content)
{
    free(content);
}*/

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*tmp2;

	if (!lst || !*lst)
		return ;
	tmp = *lst;
	tmp2 = tmp->next;
	while (tmp2)
	{
		ft_lstdelone(tmp, (*del));
		tmp = tmp2;
		tmp2 = tmp2->next;
	}
	ft_lstdelone(tmp, (*del));
	*lst = NULL;
}
/*
int	main(void)
{
	t_list *list = ft_lstnew(ft_strdup("Hello,"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("World!")));

	printf("Conteúdo antes da deleção:\n1 - %s\n2 - %s\n", 
		(char *)(list->content), (char *)(list->next->content));
	ft_lstclear(&list, delete_content);
	printf("Conteúdo após a deleção:\n1 - %s\n", (char *)(list->content));
	return (0);
}*/