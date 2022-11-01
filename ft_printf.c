/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:26:12 by csanroma          #+#    #+#             */
/*   Updated: 2022/05/12 19:26:16 by csanroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_printargs(const char c, va_list ap)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_putchar_fd(va_arg(ap, int), 1);
	else if (c == 's')
		i = ft_putstr_fd(va_arg(ap, char *), 1);
	else if (c == 'p')
		i = ft_putloc_fd(va_arg(ap, unsigned long int), 1);
	else if (c == 'd' || c == 'i')
		i = ft_putnbr_fd(va_arg(ap, int), 1);
	else if (c == 'u')
		i = ft_put_u_fd(va_arg(ap, unsigned int), 1);
	else if (c == 'x')
		i = ft_puthex_fd(va_arg(ap, unsigned int), 1);
	else if (c == 'X')
		i = ft_puthex_up_fd(va_arg(ap, unsigned int), 1);
	else if (c == '%')
		i += write(1, &c, 1);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	ap;

	i = 0;
	len = 0;
	if (!str)
		return (-1);
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			len += ft_printargs(str[i + 1], ap);
			i ++;
		}
		else
			len += write(1, &str[i], 1);
		i++;
	}
	va_end(ap);
	return (len);
}

/*int main (void)
{
	//printf("%s",(char *) 0);
	//printf(" yo = %i \n",ft_printf("%s","abc"));
	//fflush(stdout);
	//printf(" tu = %i \n",printf("%s","abc"));

	printf(" yo = %i \n",ft_printf("%s",0));
	//fflush(stdout);
	printf(" tu = %i \n",printf("%s",(char *) 0));
	printf(" tu = %i \n",printf("%X",6233));
	printf(" yo = %i \n",ft_printf("%X",6233));
	return (0);
}*/
