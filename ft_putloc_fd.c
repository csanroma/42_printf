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

/*Outputs the string ’s’ to the given file
descriptor.*/

#include "ft_printf.h"

void	ft_ptr(unsigned long int nbr, char *bas, int fd, int *hex)
{
	unsigned long int	i;
	unsigned long int	j;

	i = 16;
	if (nbr >= i)
	{
		ft_ptr(nbr / i, bas, fd, hex);
	}
	j = nbr % i;
	*hex += write(fd, &bas[j], 1);
}

int	ft_putloc_fd(unsigned long int nbr, int fd)
{
	int	len;

	len = 0;
	len += write(1, "0x", 2);
	ft_ptr(nbr, "0123456789abcdef", fd, &len);
	return (len);
}

/*int main (void)
{
char *abc="abc";
int i=8;
printf("%p\n",abc);
printf("%u\n",(unsigned long int) abc);
ft_putloc_fd((unsigned long int) abc, 1);
printf("%p\n",i);
printf("%u\n",(unsigned long int) i);
ft_putloc_fd((unsigned long int) i, 1);
return (0);
}*/
