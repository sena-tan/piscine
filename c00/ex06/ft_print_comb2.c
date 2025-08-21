/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 02:10:06 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/07 02:27:40 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int		x;
	int		y;
	char	digit[5];

	x = 0;
	y = 0;
	while (x <= 98)
	{
		digit[0] = x / 10 + '0';
		digit[1] = x % 10 + '0';
		y = x + 1;
		while (y <= 99)
		{
			digit[2] = ' ';
			digit[3] = y / 10 + '0';
			digit[4] = y % 10 + '0';
			write(1, &digit, 5);
			if (x != 98)
			{
				write(1, ", ", 2);
			}
			y++;
		}
		x++;
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
