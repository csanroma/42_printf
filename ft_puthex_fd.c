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

void	ft_ptr(unsigned long int nbr, char *bas, int fd, int *hex);

/*void	ft_ptr(unsigned long int nbr, char *bas, int fd, int *hex)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 16;
	//printf("%i",nbr);
	if (nbr >= i)
	{
		ft_ptr(nbr / i, bas, fd, hex);
	}
	j = nbr % i;
	*hex += write(fd, &bas[j], 1);
}*/

int	ft_puthex_fd(unsigned long int nbr, int fd)
{
	int	len;

	len = 0;
	ft_ptr(nbr, HEXADECIMAL, fd, &len);
	return (len);
}

int	ft_puthex_up_fd(unsigned long int nbr, int fd)
{
	int	len;

	len = 0;
	ft_ptr(nbr, HEXADECIMAL_UP, fd, &len);
	return (len);
}
