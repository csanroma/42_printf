/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 19:26:12 by csanroma          #+#    #+#             */
/*   Updated: 2022/08/25 16:39:07 by csanroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h> // printf
# include <stdlib.h> // malloc
# include <unistd.h> // write
# include <stdarg.h> // va_list
# include <strings.h>

# define DECIMAL "0123456789"
# define HEXADECIMAL "0123456789abcdef"
# define HEXADECIMAL_UP "0123456789ABCDEF"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int	ft_putchar_fd(char c, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int nbr, int fd);
int	ft_put_u_fd(unsigned long int nbr, int fd);
int	ft_putloc_fd(unsigned long int nbr, int fd);
int	ft_puthex_fd(unsigned long int nbr, int fd);
int	ft_puthex_up_fd(unsigned long int nbr, int fd);
int	ft_printf(const char *str, ...);

#endif
