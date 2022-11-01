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

#include "ft_printf.h"

/* Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled. */

size_t	len_nb(long int nb)
{
	size_t		i;

	i = 0;
	if (nb == 0)
	{
		i++;
		return (i);
	}
	if (nb < 0)
	{
		nb = nb * (-1);
		i++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char			*str;
	size_t			len;
	long int		num;

	len = len_nb(n);
	num = n;
	str = (char *)malloc((len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);
	*(str + (len--)) = '\0';
	if (num < 0)
	{
		*(str) = '-';
		num = -num;
	}
	while (num >= 10)
	{
		*(str + len--) = num % 10 + '0';
		num = num / 10;
	}
	if (num == 0)
		*(str) = '0';
	else
		*(str + len) = (char)(num + '0');
	return (str);
}

/*int main(void)
{
	printf("%s", ft_itoa(-156423165));
	//printf("\n%d", atoi(c));
	return(0);
}*/