/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:06:38 by csanroma          #+#    #+#             */
/*   Updated: 2022/02/22 19:06:40 by csanroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		lst = lst -> next;
		i++;
	}
	return (i);
}

/*int	main(void)
{
	t_list * l =  NULL;

	 printf("%d\n",ft_lstsize(l));
	 ft_lstadd_front(&l, ft_lstnew((void*)1));
	 printf("%d\n",ft_lstsize(l));
	// ft_lstadd_front(&l, ft_lstnew((void*)2));
	//  check(ft_lstsize(l) == 2);
	// freeList(l); showLeaks();
	// write(1, "\n", 1);
	return (1);
}*/