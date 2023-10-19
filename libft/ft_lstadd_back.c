/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:20:09 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:48:43 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*
int	main(void)
{
	t_list *lista = NULL;
	t_list *ret;
	
	ft_lstadd_back(&lista, ft_lstnew("A"));
	ft_lstadd_back(&lista, ft_lstnew("B"));
	ft_lstadd_back(&lista, ft_lstnew("C"));
	ft_lstadd_back(&lista, ft_lstnew("D"));
	ret = ft_lstlast(lista);
	printf("%s\n", (char *)ret->content);
	return (0);
}*/

//ret e um ponteiro pra vermos o ultimo elemento(node)/conteudo da lista.