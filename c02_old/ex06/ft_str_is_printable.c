/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 06:10:09 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/21 06:21:57 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(str[i] >= '!' && str[i] <= '~'))
			return (0);
		i++;
	}
	return (1);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d\n", ft_str_is_printable(argv[1]));
// }
