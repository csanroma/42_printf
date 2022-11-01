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

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		j;

	j = 0;
	i = 0;
	while (*(s1 + j) == *(s2 + j) && *(s1 + j) && *(s2 + j) && i < n)
	{
		j++;
		i++;
	}
	if (i == n)
		return (0);
	else
		return ((int)(*((unsigned char *)s1 + j)
			- *((unsigned char *)s2 + j)));
}
