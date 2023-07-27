/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:41:41 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/19 16:02:48 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*start;
	t_list	*tmp;

	if (!del)
		return ;
	start = *lst;
	while (start)
	{
		tmp = start;
		del(tmp->content);
		start = start -> next;
		free(tmp);
	}
	*lst = NULL;
}
void del(void *cnt)
{
	free(cnt);
}
int	main()
{
	t_list **a;
	t_list *lst;

	a = &lst;
	lst = ft_lstnew("content1");

	ft_lstclear(a, del);
	printf("%s",lst->content);

	return (0);
}