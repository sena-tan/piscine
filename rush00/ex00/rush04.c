/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiheins <aiheins@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 10:51:35 by aiheins           #+#    #+#             */
/*   Updated: 2025/08/03 15:44:28 by aiheins          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	print_rows(int rows, char firstr, char middler, char lastr)
{
	int	i;

	i = 1;
	while (i <= rows)
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
		i++;
	}
	ft_putchar('\n');
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
			if (i == 1)
			{
				print_rows(rowx, 'A', 'B', 'C');
			}
			else if (i == rowx)
			{
				print_rows(rowx, 'C', 'B', 'A');
			}
			else
			{
				print_rows(rowx, 'B', ' ', 'B');
			}
		}
	}
}
