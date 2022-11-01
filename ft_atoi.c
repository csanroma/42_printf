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

/*The bzero() function writes n zeroed bytes to the string s.  If n is zero,
bzero() does nothing.*/

#include "libft.h"

int	is_num(const char *str);

int	ft_atoi(const char *str)
{
	unsigned long	n;
	int				sign;

	n = 0;
	sign = 1;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == 45 || *str == 43)
	{
		if (*str == 45)
			sign = -sign;
		str++;
	}
	while (is_num(str) == 1 && *str != '\0')
	{
		n = (*str - 48) + n * 10;
		str++;
	}
	if (n > (unsigned long)9223372036854775807 && sign < 0)
		return (0);
	else if (n > (unsigned long)9223372036854775807 && sign > 0)
		return (-1);
	return (sign * n);
}

int	is_num(const char *str)
{
	if (*str > 47 && *str < 58)
		return (1);
	return (-1);
}

/*int main(void)
{
	//char c[9]="\t\n\v\f\r ";
	//printf(" %d %d %d %d %d %d ",c[0],c[1],c[2],c[3],c[4],c[5]);
	//char c[]="     \t   -205";
	//printf("%d", ft_atoi(c));
	//printf("%d", ft_atoi((e + "--1").c_str()));
	//printf("\n%d", atoi(c));
	
	char escape[] = {9, 10, 11, 12, 13, 0};
	string e(escape);
	printf("%d",ft_atoi((e + "++1").c_str()));


	return(0);
}*/