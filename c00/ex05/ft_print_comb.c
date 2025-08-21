/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:11:10 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/04 02:35:18 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	x;
	int	y;
	int	z;

	x = 47;
	while (++x <= 55)
	{
		y = x;
		while (++y <= 56)
		{
			z = y;
			while (++z <= 57)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x != '7')
				{
					write(1, ", ", 2);
				}
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
