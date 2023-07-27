/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:59 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/14 18:23:11 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (NULL);
	if (dst > src)
	{
		while (n--)
			((char *)dst)[n] = ((char *)src)[n];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
int main()
{
	char s[]="abcdef";
	printf("m %s\n",ft_memmove(s-2,s,4));
	printf("m %s\n",s);
	
	char a[]="abcdef";
	printf("c %s\n",(char *)ft_memcpy(a-2,a,4));
	printf("c %s\n",a);
	
	char ss[]="abcdef";
	printf("m %s\n",ft_memmove(ss+2,ss,4));
	printf("m %s\n",ss);
	
	char b[]="abcdef";
	printf("c %s\n",(char *)ft_memcpy(b+2,b,4));
	printf("c %s",b);
}