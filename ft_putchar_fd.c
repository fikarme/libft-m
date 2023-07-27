/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akdemir <akdemir@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 20:42:03 by akdemir           #+#    #+#             */
/*   Updated: 2023/07/20 15:04:52 by akdemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(1, &c, 1);
}
int main()
{
	int fd;
	fd=open("a.txt",O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('a',fd);
		ft_putchar_fd('ab',fd);
	fd=open("ab.txt",O_CREAT | O_RDWR, 0777);
	ft_putchar_fd('b',fd);
}