/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 15:00:55 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/13 02:49:08 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h> //write
#include <stdio.h> // printf

// int	g_number = 13;

void	ft_ft(int *nbr)
{
	// int	number;
	// number = 13;

	// nbr = &number;
	// printf("unchanged num is: %d\n", *nbr);
	*nbr = 42;
	// printf("new num is: %d\n", *nbr);
}

int	main(void)
{
	int	number;
	number = 13;
	int *nbr;

	nbr = &number;
	printf("unchanged num is: %d\n", *nbr);
	ft_ft(nbr);
	printf("new num is: %d\n", *nbr);
	// void	ft_ft(int *nbr);
	// return (0);
}
