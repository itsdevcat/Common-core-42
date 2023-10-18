/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:52:51 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/18 14:54:20 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
int	main(void)
{
	t_list	*node1 = ft_lstnew("Element 1, so texto");
	t_list	*node2 = ft_lstnew("12345");

	if (node1 && node2)
	{
		printf("Node 1 content: %s\n", (char *)node1->content);
		printf("Node 2 content: %s\n", (char *)node2->content);
	}
	else
		printf("Falha ao criar elementos da lista.\n");
	free (node1);
	free (node2);
	return (0);
}*/

// o primeiro if verifica se os nodes foram criados com sucesso