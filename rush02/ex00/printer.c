/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printer.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-jong <ede-jong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:29:12 by ede-jong          #+#    #+#             */
/*   Updated: 2025/08/17 18:48:25 by ede-jong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str);
char	*ft_mergestr(char *str1, char *str2);
int		ft_strlen(char *str);
int		ft_is_zero(char *triple);
char	*print_single(t_dict dict, char c, char *str);
char	*print_with_zeros(t_dict dict, char c, int zeros, char *str);
char	*print_triple(t_dict dict, char *n, char *str);

char	*print_all(t_dict dict, char *numstr, char *str)
{
	t_printvars	vars;

	vars.triple[0] = '0';
	vars.triple[1] = '0';
	vars.triple[3] = '\0';
	vars.size = ft_strlen(numstr);
	vars.i2 = 1 - (vars.size - 1) % 3;
	vars.i1 = -1;
	while (++vars.i1 < vars.size)
	{
		vars.triple[++vars.i2] = numstr[vars.i1];
		if (vars.i2 == 2)
		{
			str = print_triple(dict, vars.triple, str);
			if (str == 0)
				return (0);
			if (vars.size - 1 - vars.i1 > 2 && !ft_is_zero(vars.triple))
				str = print_with_zeros(dict, '1', vars.size - 1 - vars.i1, str);
			if (str == 0)
				return (0);
			vars.i2 = -1;
		}
	}
	return (str);
}

char	*print_triple(t_dict dict, char *n, char *str)
{
	if (n[0] > '0')
	{
		str = print_single(dict, n[0], str);
		if (str != 0)
			str = ft_mergestr(str, get_value(dict, "100"));
	}
	if (n[1] == '1' && str != 0)
		str = ft_mergestr(str, get_value(dict, n + 1));
	else
	{
		if (n[1] > '1' && str != 0)
			str = print_with_zeros(dict, n[1], 1, str);
		if (n[2] > '0' && str != 0)
			str = print_single(dict, n[2], str);
	}
	return (str);
}

char	*print_single(t_dict dict, char c, char *inputstr)
{
	char	str[2];
	char	*value;

	str[0] = c;
	str[1] = '\0';
	value = get_value(dict, str);
	if (value == 0)
		return (0);
	inputstr = ft_mergestr(inputstr, value);
	return (inputstr);
}

char	*print_with_zeros(t_dict dict, char c, int zeros, char *inputstr)
{
	char			*str;
	unsigned char	i;
	char			*value;

	str = (char *) malloc(sizeof(char) * (zeros + 2));
	if (str == 0)
	{
		write(1, "Malloc Error\n", 13);
		return (0);
	}
	str[zeros + 1] = '\0';
	str[0] = c;
	i = 1;
	while (i <= zeros)
		str[i++] = '0';
	value = get_value(dict, str);
	if (value == 0)
	{
		return (0);
	}
	inputstr = ft_mergestr(inputstr, value);
	free(str);
	return (inputstr);
}

void	print_start(t_dict dict, char *numstr)
{
	char	*str;

	str = (char *) malloc(sizeof(char));
	if (str == 0)
	{
		write(1, "Malloc Error\n", 13);
		return ;
	}
	str[0] = '\0';
	while (numstr[0] == '0')
		numstr++;
	if (numstr[0] == '\0')
		str = print_single(dict, '0', str);
	else
		str = print_all(dict, numstr, str);
	if (str == 0)
		return ;
	ft_putstr(str + 1);
	write(1, "\n", 1);
	free(str);
}
