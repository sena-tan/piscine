/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 15:49:48 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/12 16:16:08 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ft(int *nbr)
{
	*nbr = 42;
}

int main(void)
{
	int number;
	number = 13;
	int *nbr;

	nbr =&number;
	printf("old number is %d\n", number);
	ft_ft(nbr);
	printf("address is %p\n", nbr);
	printf("new number is %d\n", *nbr);
	printf("number variable is : %d\n", number);
	return (0);
}
