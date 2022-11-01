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

/*   appends string src to the end of dst.  It will append at most dstsize -
strlen(dst) - 1 characters.  It will then NUL-terminate, unless dstsize 
is 0 or the original dst string was longer than dstsize (in practice this 
should not happen as it means that either dstsize is incorrect or that 
dst is not a proper string). */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dest_len;

	src_len = ft_strlen(src);
	dest_len = ft_strlen(dest);
	i = 0;
	if (size == 0)
		return (src_len);
	if (size < dest_len)
		return (src_len + size);
	if (dest_len < size - 1)
	{
		size = size - dest_len - 1;
		while ((src[i] != 0) && (i < size))
		{
			dest[i + dest_len] = src[i];
			i++;
		}
	}	
	if (size != 0 && dest_len < size)
		dest[i + dest_len] = '\0';
	return (src_len + dest_len);
}
