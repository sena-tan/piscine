/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 17:03:55 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/11 17:48:19 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h> // printf

int	main(void)
{
	char	c;
	char	*ptr;

	c = 'L';
	ptr = &c;
	// write(1, &c, 1);
	printf("print old char c: %d", c);
	*ptr = 'O';
	// write(1, &c, 1);
	printf("print new char c: %d", c);
}
