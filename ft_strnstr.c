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

/* function locates the first occurrence of the null-terminated string
needle in the string haystaci, where not more than len characters are 
searched. Characters that appear after a `\0' character are not searched.  
Since the strnstr() function is a FreeBSD specific API, it should only be 
used when portability is not a concern. */

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	i;
	size_t	l;
	size_t	n;

	i = 0;
	l = 0;
	if (*to_find == 0 || to_find == str)
		return ((char *)str);
	while (str[i] && i < len)
	{
		n = 0;
		while (str[i + n] && to_find[n] && str[i + n] == to_find[n]
			&& i + n < len)
			n++;
		if (to_find[n] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (0);
}

/*int main(void)
{
	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	//char * empty = (char*)"";

	printf("%zu\n",(size_t)(-1));
	printf("%s %s", ft_strnstr(haystack, needle, -1), haystack + 1);
	printf("\n%s %s", strnstr(haystack, needle, -1), haystack + 1);

	return (0);
}*/