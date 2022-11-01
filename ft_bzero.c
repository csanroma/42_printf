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

/*The bzero() function writes n zeroed bytes to the string s.  If n is zero,
bzero() does nothing.*/

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*int main (void)
{
	size_t			n=1;
	char			c[5]="HOLA";
	char			cx[5]="HOLA";
	
	// original
	bzero(c, n);
	for (size_t i = 0; i < 5; i++) write(1,&c[i],1);

	write(1,"\n",1);

	// mine
	bzero(cx, n);
	for (size_t i = 0; i < 5; i++) write(1,&cx[i],1);
	return(0);
}*/