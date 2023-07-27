/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:42:56 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/17 16:29:42 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	i;
	size_t	li;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	li = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[li]) && li)
		li--;
	p = ft_substr(s1, i, li - i + 1);
	return (p);
}
int main()
{
	char *s1="ackifca";
	char *set="ak";
	printf("%s",ft_strtrim(s1,set));
}