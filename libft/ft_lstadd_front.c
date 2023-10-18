/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:33:22 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/18 16:51:23 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *lista;
	
	ft_lstadd_front(&lista, ft_lstnew("Arroz"));
	printf("%s\n", (char *)lista->content);
	ft_lstadd_front(&lista, ft_lstnew("Doce"));
	printf("%s\n", (char *)lista->content);
	lista = lista->next;
	printf("%s\n", (char *)lista->content);

	return (0);
}
*/