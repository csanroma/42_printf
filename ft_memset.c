/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libt.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:14:42 by csanroma          #+#    #+#             */
/*   Updated: 2022/02/01 18:14:45 by csanroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The memset() function writes len bytes of value c (converted to an
unsigned char) to the string b.*/

#include "libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		*((unsigned char *)b + i) = c;
		i++;
	}
	return (b);
}

/*int main(void)
{
	char tab[100];
	printf("%s \n",memset(tab, 0, 100)); //Post 0
	printf("%s \n",ft_memset(tab, 'A', 3)); //Post 0
	//printf("%s \n",ft_memmove(s, s + 2, 2)); //Post 0
	
	write(1, "\n", 1);
	return (0);
}*/