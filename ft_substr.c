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

/*s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.*/

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
	{
		s2 = malloc(sizeof(char));
		if (s2 != NULL)
			s2[0] = 0;
		return (s2);
	}
	if (len > str_len - start)
		len = str_len - start;
	s2 = malloc(sizeof(char) * len + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, s + start, len + 1);
	return (s2);
}

/*int main(void)
{
	char s0[10] = "ABCD";
	printf("%s \n",s0); //Post 0
	printf("%s \n",ft_substr(s0, 2, 7)); //Post 0
	printf("%s \n",ft_substr(s0, 7, 7)); //Post 0
	printf("%s \n",ft_substr(s0, 1, 2)); //Post 0
	return(0);
}*/