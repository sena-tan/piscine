/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 01:52:17 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/19 09:41:17 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	mid;

	i = 0;
	mid = tab[i];
	while (i < size / 2)
	{
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = mid;
		i++;
	}
}

// int	main(void)
// {
// 	int	array[] = {1, 2, 3};
// 	int	size = (sizeof(array)/sizeof(array[0]));

// 	ft_rev_int_tab(array, size);

// 	printf("last element of array is %d", array[2]);
// }
