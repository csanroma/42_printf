/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csanroma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 18:44:58 by csanroma          #+#    #+#             */
/*   Updated: 2022/02/28 17:49:54 by csanroma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

size_t	str_len_sep(const char *s, char c)
{
	unsigned int	i;

	i = 0;
	while (s[i] != 0 && *(s + i) != c)
		i++;
	return (i);
}

size_t	word_count_sep(const char *s, char c)
{
	size_t	wc;

	wc = 0;
	if (!s)
		return (0);
	while (*(s) && *(s) == c)
		s++;
	if (*(s) && wc == 0)
		wc = 1;
	while (*(s) && *(s + 1))
	{
		if (*(s) && *(s) == c)
		{
			if (*(s + 1) && *(s + 1) != c)
			{
				wc++;
			}
		}
		s++;
	}
	return (wc);
}

char	**ft_free_2xptr(char **array, size_t len_array)
{
	while (len_array >= 0)
	{
		free(*(array + len_array));
		len_array--;
	}
	free(array);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	size_t			wc;
	size_t			wl;
	char			**split;

	wc = word_count_sep(s, c);
	split = malloc(sizeof(char *) * (wc + 1));
	if (split == NULL)
		return (NULL);
	i = 0;
	while (i < wc && wc > 0)
	{
		while (*s && *s == c)
			s++;
		wl = str_len_sep(s, c);
		split[i] = ft_substr(s, 0, wl);
		if (split[i] == NULL)
			ft_free_2xptr(split, i);
		s = s + wl;
		while (*s && *s == c)
			s++;
		i++;
	}
	split[i] = NULL;
	return (split);
}

/*int main(void)
{

	char * * tab = ft_split("      ", ' ');
	//size_t u = word_count_sep("      ", ' ');
	//printf("%zu\n",u);
	//printf("memory check %zu %lu\n", malloc_size(tab), sizeof(char *) * 3);
	// char **tab = ft_split("trip,42,jeje", ',');
	// //tab[2] = NULL;
	// printf("%p\n",tab[2]);
	// //system("leaks a.out");
	// printf("tab[2] == NULL - > %d",tab[2] == NULL);
	// //freeTab(tab); showLeaks();

	//char * * tab = ft_split("*****", '*');
	printf("%s\n", tab[0]); //, tab[1]);
	//  printf("%s\n%s\n", tab[0]); //, tab[1]);
	//  printf("memory check %zu %lu\n", malloc_size(tab), sizeof(char *) * 2);
	//  printf("%d\n", strcmp(tab[0], "chinimala"));
	//  printf("%d", tab[1] == NULL);

return (0);
}*/
