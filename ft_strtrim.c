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

/*Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters 
specified in ’set’ removed from the beginning and the end of the string.*/

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		str_len;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *(s1)))
		s1++;
	if (*s1 == 0)
		return (ft_substr("\0", 0, 0));
	str_len = ft_strlen(s1);
	while (ft_strchr(set, *(s1 + str_len)))
		str_len--;
	str = ft_substr(s1, 0, str_len + 1);
	return (str);
}

/*int main(void)
{
	printf("%s \n",ft_strtrim("---ABCD---", "-")); 
	printf("%s \n",ft_strtrim("   xxxtripouille", " x"));
	return(0);
}*/