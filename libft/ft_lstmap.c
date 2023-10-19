/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/19 12:24:10 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:47:26 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	delete_content(void *content)
{
    free(content);
}

void	*print_content(void *content)
{
	printf("The content of the list is: %s\n", (char *)content);
	return (content);
}*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	head = ft_lstnew((*f)(lst->content));
	if (!head)
		return (NULL);
	lst = lst->next;
	while (lst)
	{
		tmp = ft_lstnew((*f)(lst->content));
		if (!tmp)
		{
			ft_lstclear(&head, (*del));
			return (NULL);
		}
		ft_lstadd_back(&head, tmp);
		lst = lst->next;
	}
	return (head);
}

/*
int	main(void)
{
	t_list *list = ft_lstnew(ft_strdup("Hello,"));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("World!")));
	t_list	*new = ft_lstmap(list, print_content, delete_content);
	printf("Lista Nova:\n1-%s\n2-%s\n",
		(char *)new->content, (char *)new->next->content);
	return (0);
}*/