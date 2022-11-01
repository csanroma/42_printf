/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libt.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjnroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 18:14:42 by cjnroma          #+#    #+#             */
/*   Updated: 2022/02/01 18:14:45 by cjnroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strchr() function locates the first occurrence of c (char)
 in the string pointed to by s.  The terminating null character is considered 
 to be part of the string; therefore if c is `\0', the functions locate the 
 terminating `\0'. */

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char *)s;
	while (*s && *s != (char)c)
		s++;
	if (*s == (char)c)
	{
		ptr = (char *)s;
		return (ptr);
	}
	else
		return (NULL);
}

/*int main(void)
{
	printf("%s \n", ft_strchr("ABCD", 'd'));
	printf("%s \n", strchr("ABCD", 'd'));
	return(1);
}*/