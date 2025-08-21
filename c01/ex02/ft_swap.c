/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 06:58:18 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/13 08:18:51 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	mid;

	mid = *a;
	*a = *b;
	*b = mid;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 13;
// 	b = 42;
// 	ft_swap(&a, &b);
// 	printf("a is:%d\n", a);
// 	printf("b is:%d\n", b);
// }
