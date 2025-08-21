/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:51:35 by aiheins           #+#    #+#             */
/*   Updated: 2025/08/07 04:41:12 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_row(int cols, char first, char mid, char last)
{
	int	i;

	ft_putchar(first);
	i = 1;
	while (i < cols)
	{
		ft_putchar(mid);
		i++;
	}
	if (i == cols)
	{
		ft_putchar(last);
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int i;

	if (x <= 0 || y <= 0)
	{
		return ;
	}
	print_row(x, '/', '*', '\\');

	i = 1;
	while (i < y)
	{
		print_row(x, '*', ' ', '*');
		i++;
	}
	print_row(x, '\\', '*', '/');
}
