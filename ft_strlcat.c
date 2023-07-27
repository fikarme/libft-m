/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:42:37 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/15 17:57:17 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	td;

	i = 0;
	j = 0;
	td = ft_strlen(dst);
	if (dstsize <= td)
		return (dstsize + ft_strlen(src));
	while (src[j] && td + j < dstsize - 1)
	{
		dst[td + j] = src[j];
		j++;
	}
	dst[td + j] = '\0';
	return (ft_strlen(src) + td);
}
int main()
{
	char *s="akif";
	char d[9]="emre";
	printf("%zu\n",ft_strlcat(d,s,9));
	printf("%s\n",d);
	printf("%s\n",s);
}
