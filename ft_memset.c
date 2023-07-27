/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:42:01 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/20 17:37:24 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)a;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (a);
}
int main()
{
	int a[]={123,256};
	int *c=ft_memset(a,0,5);
	printf("%d %d",c[0],c[1]);
}