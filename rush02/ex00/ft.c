/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-jong <ede-jong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 18:05:28 by ede-jong          #+#    #+#             */
/*   Updated: 2025/08/17 18:57:59 by ede-jong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	len = ft_strlen(str);
	write(1, str, len);
}

char	*ft_mergestr(char *str1, char *str2)
{
	int		len;
	int		i;
	int		stri;
	char	*result;

	len = ft_strlen(str1) + ft_strlen(str2);
	result = (char *) malloc(sizeof(char) * (len + 2));
	if (result == 0)
	{
		write(1, "Malloc Error\n", 13);
		return (0);
	}
	i = 0;
	stri = 0;
	while (str1[stri])
		result[i++] = str1[stri++];
	result[i++] = ' ';
	stri = 0;
	while (str2[stri])
		result[i++] = str2[stri++];
	result[i] = '\0';
	free(str1);
	return (result);
}

int	ft_str_equal(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i])
	{
		if (str1[i] != str2[i])
			return (0);
		i++;
	}
	if (str1[i] != str2[i])
		return (0);
	return (1);
}

int	ft_is_zero(char *triple)
{
	if (triple[0] == '0' && triple[1] == '0' && triple[2] == '0')
		return (1);
	else
		return (0);
}
