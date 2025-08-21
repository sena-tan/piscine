/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 04:33:02 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/03 20:39:51 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	i;

	i = 47;
	while (++ i <= '9')
	{
		write(1, &i, 1);
	}
}

// int	main(void)
// {
// 	ft_print_numbers();
// 	return (0);
// }
