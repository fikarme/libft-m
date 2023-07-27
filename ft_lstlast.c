/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:47 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/19 16:46:39 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
int main()
{
	t_list *l1;
	t_list *l2;
	t_list *l2;
	l1=ft_lstnew("a");
	l2=ft_lstnew("z");
	l3=ft_lstnew("c");
	l1->next=l2;
	ft_lstlast(l3);
	printf("%s",l1->next->content);
}