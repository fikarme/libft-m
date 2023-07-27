/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:54 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/14 17:32:46 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (NULL);
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
int main()
{
    const char str[] = "akif";
    int c = 'i';
    void *res = ft_memchr(str, c, sizeof(str));
	printf("%c", *(char*)res);
    return 0;
}
//const void *s -> mande öyle -> char 1 int 4 istediğine -> const void *s = (unsigned char *)s 
