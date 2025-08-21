/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbayrakt <sbayrakt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 04:44:33 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/21 06:03:29 by sbayrakt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	is_alphabetical(char c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!(is_alphabetical(str[i])))
			return (0);
		i++;
	}
	return (1);
}

// int	main(int argc, char **argv)
// {
// 	if (argc == 2)
// 		printf("%d\n", ft_str_is_alpha(argv[1]));
// }
