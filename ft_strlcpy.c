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

#include "libft.h"

/*int	ft_strlcpy(char *dest, char *src, unsigned int n)*/
size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	n_src;

	n_src = 0;
	while (*(src + n_src) != 0)
		n_src++;
	i = 1;
	while ((*src != 0) && i < size)
	{
		*dest = *src;
		i++;
		src++;
		dest++;
	}	
	if (size != 0)
		*dest = '\0';
	return (n_src);
}

/*int main()
{
    char    s1[5] = "ri";
    char    s2[4] = "oii";
    unsigned int    k;
	unsigned int	q;
	unsigned int	w;
    
	k = 4;
	w = ft_strlcat(s1, s2, k);
    printf("%s\n %u\n", s1, w);
    char    s3[5] = "ri";
    char    s4[4] = "oii";
	q = strlcat(s3, s4, k);
    printf("%s\n %u\n", s3, q);
}*/