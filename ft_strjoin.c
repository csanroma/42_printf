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

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	lens1;
	size_t	lens2;

	if (s1 == NULL)
	{
		if (s2 == NULL)
			return (NULL);
		str = ft_strdup(s2);
		return (str);
	}
	lens1 = ft_strlen(s1);
	if (s2 == NULL)
		return (ft_strdup(s1));
	lens2 = ft_strlen(s2);
	str = (char *) malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, s1, lens1 + 1);
	ft_strlcpy(str + lens1, s2, lens2 + 1);
	return (str);
}

/*int main(void)
{
	printf("%s \n",ft_strjoin("ABC","***")); //Post 0
	printf("%s \n",ft_strjoin("","***")); //Post 0
	printf("%s \n",ft_strjoin(0,"***")); //Post 0
	return(0);
}*/