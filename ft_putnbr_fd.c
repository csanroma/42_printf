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

/*Outputs the string ’s’ to the given file descriptor
followed by a newline.*/

void	ft_getnbr_fd(unsigned long int n, int fd, int *dec)
{
	if (n > 9)
	{
		ft_getnbr_fd(n / 10, fd, dec);
		ft_getnbr_fd(n % 10, fd, dec);
	}
	else
	{
		n = n + '0';
		*dec += write(fd, &n, 1);
	}
}

int	ft_putnbr_fd(int nbr, int fd)
{
	int			count;
	long int	li;

	count = 0;
	li = nbr;
	if (nbr < 0)
	{
		count += write(1, "-", 1);
		li = -1 * (long int) nbr;
	}
	ft_getnbr_fd(li, fd, &count);
	return (count);
}

int	ft_put_u_fd(unsigned long int nbr, int fd)
{
	int	count;

	count = 0;
	ft_getnbr_fd(nbr, fd, &count);
	return (count);
}
