/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 01:55:48 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/18 14:44:02 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div ;
	*b = mod ;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;

// 	a = 7;
// 	b = 2;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("div is: %d\n", a);
// 	printf("mod is: %d\n", b);
// }
