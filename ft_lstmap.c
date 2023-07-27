/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:48 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/17 13:53:46 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			ft_lstclear(&new_list, del);
			printf("%s","zort");
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&new_list, tmp);
	}
	return (new_list);
}
void *f(void *cnt)
{
	cnt = "zart";
	return (cnt);
}
void del(void *cnt)
{
	free(cnt);
}
int	main()
{
	t_list *lst;

	lst = ft_lstnew("");

	lst = ft_lstmap(lst, f, del);
	printf("%s",lst->content);
 
	return (0);
}