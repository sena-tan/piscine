/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 15:52:27 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/03 16:09:43 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_rows(int rows, char firstr, char middler, char lastr)
{
	int	i;

	i = 0;
	while (++i <= rows)
	{
		if (i == 1)
		{
			ft_putchar(firstr);
		}
		else if (i == rows)
		{
			ft_putchar(lastr);
		}
		else
		{
			ft_putchar(middler);
		}
	}
	ft_putchar(10);
}

void	rush(int x, int y)
{
	int	i;
	int	rowx;
	int	rowy;

	i = 0;
	rowx = x;
	rowy = y;
	if (rowx >= 1 && rowy >= 1)
	{
		while (++i <= rowy)
		{
			if (i == 1 || i == rowx)
			{
				print_rows(rowx, 'o', '-', 'o');
			}
			else
			{
				print_rows(rowx, '|', ' ', '|');
			}
		}
	}
}
