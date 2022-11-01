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

/*The strdup() function allocates sufficient memory for a copy of the string 
s1, does the copy, and returns a pointer to it.  The pointer may subsequently 
be used as an  argument to the function free(3).*/

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*s2;

	i = 0;
	while (*(s1 + i) != 0)
		i++;
	s2 = malloc(sizeof(char) * (i + 1));
	if (s2 == '\0')
		return (0);
	*(s2 + i) = '\0';
	while (i + 1 > 0)
	{
		*(s2 + i) = *((char *)s1 + i);
		i--;
	}
	return (s2);
}
