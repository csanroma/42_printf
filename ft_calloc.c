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

/* te llena un string con 0s */

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*c;
	void	*ptr;

	i = 0;
	c = malloc(sizeof(char) * count * size);
	if (c == '\0')
		return (0);
	while (i < size * count)
	{
		*(c + i) = '\0';
		i++;
	}
	ptr = (void *)c;
	return (ptr);
}
