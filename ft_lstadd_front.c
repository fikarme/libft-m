/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:39 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/15 21:50:41 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
int main()
{
	t_list *a;
	t_list *b;
	t_list *c;
	a = ft_lstnew("akif");
	b = ft_lstnew("emre");
	c = ft_lstnew("demir");
	a->next = b;
	b->next = c;
	ft_lstadd_front(&a,b);
	while (a)
	{
		printf("%s",a->content);
		a = a->next;
	}
	return 0;
}