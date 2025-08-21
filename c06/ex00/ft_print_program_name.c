/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 17:37:22 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/21 17:37:29 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str ++, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		ft_putstr(argv [0]);
		write(1, "\n", 1);
	}
	else
		write(1, "Error", 5);
}
