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

/* The strchr() function locates the first occurrence of c  in the
string pointed to by s.  The terminating null character is 
considered to be part of  the string; therefore if c is `\0', 
the functions locate the terminating `\0'. */

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len > 0 && *(s + len) != (char)c)
	{
		len--;
	}
	if (len >= 0 && *(s + len) == (char)c)
	{
		return ((char *) s + len);
	}
	return (NULL);
}

/*int main(void)
{
	char *c;
	char s[] = "123456";
	c = ft_strrchr(s,'\0');
	printf("%s",c);
	//c = strrchr(s, '5');
	//printf("%d",*c);
	//c = s + strlen(s);
	//printf("%d",*c);
	//printf("%d",ft_strrchr(s, 0) == s + strlen(s));
	//printf("%d",1 == 1);
	return(1);
}*/
