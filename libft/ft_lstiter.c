/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfranco- <cfranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 18:11:11 by cfranco-          #+#    #+#             */
/*   Updated: 2023/10/18 18:25:27 by cfranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	ft_lstiter(t_list *lst, void (*f)(void*))
{
	t_list	*tmp;
	
	if (!lst)
		return ;
	tmp = lst;
	while (tmp->next)
	{
		(*f)(tmp->content);
		tmp = tmp->next;
	}
	(*f)(tmp->content);
}

int	main(void)
{
	
}
//e importante criar um pointer tmp pra nao perdermos/alterarmos o inicio da lista.
// while (tmp->next) significa enquanto tmp tenha algum node a frente.
//voltamos a chamar a funcao caso a lista so tenha um elemento, ou pra 
// aplicarmos a funcao ao ultimo, se tiver mais do q um.