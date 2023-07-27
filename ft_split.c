/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:10 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/15 18:46:57 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	count(const char *p, char c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (p[i])
	{
		while (p[i] == c && p[i])
			i++;
		if (p[i] != c && p[i])
		{
			len++;
			while (p[i] != c && p[i])
				i++;
		}
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	tmp;
	size_t	l;

	i = 0;
	l = 0;
	list = (char **)malloc(sizeof(char *) * (count(s, c) + 1));
	if (!list)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		tmp = i;
		while (s[tmp] && s[tmp] != c)
			tmp++;
			printf("ilk");
		if (count(s, c) == l)
			break ;
		list[l++] = ft_substr(s, i, tmp - i);
		i = tmp;
		printf("son");
	}
	list[l] = 0;
	return (list);
}
int main()
{
	char a[]="ak,if";
	char **b=ft_split(a,',');
	printf("%s%s%s",*b,b[1],b[2]);
}
