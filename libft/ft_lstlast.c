/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:51:51 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:44:17 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*last;

	if (!lst)
		return (NULL);
	last = lst;
	while (last->next)
		last = last->next;
	return (last);
}
/*
int main(void)
{
	t_list *lista = NULL;
	t_list *ret = NULL;
	
	ft_lstadd_front(&lista, ft_lstnew("A"));
	ft_lstadd_front(&lista, ft_lstnew("B"));
	ft_lstadd_front(&lista, ft_lstnew("C"));
	ft_lstadd_front(&lista, ft_lstnew("D"));
	ret = ft_lstlast(lista);
	printf("%s\n", (char *)ret->content);
	return (0);
}*/

//while (last->next)
//last = last->next; enquanto tiver um node a seguir.
// last = last->next;, significa: quero que last, vire o proximo.