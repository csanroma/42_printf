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

/*     The memmove() function copies len bytes from string src to string dst. 
The two strings may overlap; 
the copy is always done in a non-destructive manner.*/

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == '\0' && src == '\0')
		return (dst);
	if (dst > src)
	{
		while (len--)
			*((unsigned char *)dst + len) = *((unsigned char *)src + len);
	}
	else
		ft_memcpy (dst, src, len);
	return (dst);
}

/*void	*ft_memcpy (void *restrict dst, const void *restrict src, size_t n)
{
	size_t			i;
	unsigned char	*c;

	i = 0;
	c = dst;
	if (src == '\0' && dst == '\0')
		return (dst);
	while (i < n)
	{
		c[i] = *((unsigned char *)src+ i);
		i++;
	}
	return (dst);
}*/

/*int main(void)
{

	char s[] = {65, 66, 67, 68, 69, 0, 45};
	char s0[] = { 0,  0,  0,  0,  0,  0, 0};
	char x[] = {65, 66, 67, 68, 69, 0, 45};
	char x0[] = { 0,  0,  0,  0,  0,  0, 0};
	//char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
	//char sResult[] = {67, 68, 67, 68, 69, 0, 45};
	//char sResult2[] = {67, 67, 68, 68, 69, 0, 45};

	printf("%s \n",ft_memmove(s0, s, 7)); //Post 0
	printf("%s \n",ft_memmove(s + 2, s, 4)); //Post 0
	//printf("%s \n",ft_memmove(s, s + 2, 2)); //Post 0

	printf("%s \n",memmove(x0, x, 7)); //Post 0
	printf("%s \n",memmove(x + 2, x , 4)); //Post 0
	//printf("%s \n",memmove(x, x + 2, 2)); //Post 0
	
	write(1, "\n", 1);
	return (0);
}*/