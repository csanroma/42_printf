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

/*The memcpy() function copies n bytes from memory area src to memory area dst.
If dst and src overlap, behavior is undefined.  Applications in which dst and 
src might overlap should use memmove(3) instead.*/

#include "libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = dst;
	if (src == '\0' && dst == '\0')
		return (dst);
	while (i < n)
	{
		c[i] = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}

/*int main (void)
{
	size_t			n=1;
	char			c[5]="HOLA";
	char			s[5]="XXXX";
	char			cx[5]="HOLA";
	
	// original
	memcpy(c, s, n);
	for (size_t i = 0; i < 5; i++) write(1,&c[i],1);

	write(1,"\n",1);

	// mine
	ft_memcpy(cx, s, n);
	for (size_t i = 0; i < 5; i++) write(1,&cx[i],1);
	return(0);
}*/