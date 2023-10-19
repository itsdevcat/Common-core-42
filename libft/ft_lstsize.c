/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 15:21:13 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/19 14:43:57 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*tmp;
	int		size;

	if (!lst)
		return (0);
	tmp = lst;
	size = 0;
	while (tmp)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
/*
int main(void)
{
	t_list *lista = NULL;
	
	ft_lstadd_front(&lista, ft_lstnew("A"));
	ft_lstadd_front(&lista, ft_lstnew("B"));
	ft_lstadd_front(&lista, ft_lstnew("C"));
	ft_lstadd_front(&lista, ft_lstnew("D"));
	
	printf("%d\n", ft_lstsize(lista));
	return (0);
}*/