/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:06:53 by csanroma          #+#    #+#             */
/*   Updated: 2022/02/22 19:06:55 by csanroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst -> next)
		lst = lst -> next;
	return (lst);
}

/*int main(void)
{

	t_list * l = (void*)1;
	printf("%d\n",ft_lstlast(l)->content == (void*)1);
	write(1, "\n", 1);
	return (0);
}*/