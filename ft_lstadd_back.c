/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:38 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/18 16:18:30 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	ft_lstlast(*lst)->next = new;
}
int main()
{
	t_list *a;
	t_list *b;  
	t_list *c;

	a = ft_lstnew("akif");
	b = ft_lstnew("emre");
	c = ft_lstnew("demir");
	a->next=b;
	ft_lstadd_back(&a, c);
	while (a)
	{
		printf("%s", a->content);
		a= a->next;
	}
	
	return 0;
}