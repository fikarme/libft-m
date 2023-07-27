/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:43 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/19 16:42:09 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void del(void *cnt)
{
	free(cnt);
	cnt=NULL;
}
void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!del)
		return ;
	if (lst)
	{
		(*del)(lst->content);
		free(lst);
	}
}

int main()
{
	t_list *a;
	t_list *b;
	t_list *c;


	a = ft_lstnew(ft_strdup("akif"));
	b = ft_lstnew(ft_strdup("emre"));
	c = ft_lstnew(ft_strdup("demir"));
	a->next = b;
	b->next = c;

	ft_lstdelone(a, del);
	while (a)
	{
		printf("%s",a->content);
		a = a->next;
	}
	return 0;
}