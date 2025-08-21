/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-jong <ede-jong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 12:22:16 by ede-jong          #+#    #+#             */
/*   Updated: 2025/08/17 18:15:55 by ede-jong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dict.h"
#include <stdlib.h>
#include <unistd.h>

t_set	set_sizes(t_set set, char *data);
t_set	set_values(t_set set, char *data);
int		ft_str_equal(char *str1, char *str2);

t_dict	make_dict(char *data, int size)
{
	t_dict	dict;
	int		i;
	int		idata;

	dict = (t_dict) malloc(sizeof(t_set) * (size + 1));
	if (dict == 0)
		return (0);
	i = 0;
	idata = 0;
	while (i < size)
	{
		dict[i] = set_sizes(dict[i], data + idata);
		if (dict[i].key == 0 || dict[i].value == 0)
			return (0);
		dict[i] = set_values(dict[i], data + idata);
		i++;
		while (data[idata] != '\n')
			idata++;
		while (data[idata] == '\n')
			idata++;
	}
	dict[i].key = 0;
	dict[i].value = 0;
	return (dict);
}

t_set	set_sizes(t_set set, char *data)
{
	int	i;
	int	size;

	i = 0;
	size = 0;
	while (data[i] >= '0' && data[i] <= '9')
	{
		size ++;
		i++;
	}
	set.key = (char *) malloc(sizeof(char) * (size + 1));
	size = 0;
	while (data[i] == ' ')
		i++;
	i++;
	while (data[i] == ' ')
		i++;
	while (data[i] != '\n')
	{
		size ++;
		i++;
	}
	set.value = (char *) malloc(sizeof(char) * (size + 1));
	return (set);
}

t_set	set_values(t_set set, char *data)
{
	int	i;
	int	iset;

	i = 0;
	iset = 0;
	while (data[i] >= '0' && data[i] <= '9')
	{
		set.key[iset++] = data[i++];
	}
	set.key[iset] = '\0';
	iset = 0;
	while (data[i] == ' ')
		i++;
	i++;
	while (data[i] == ' ')
		i++;
	while (data[i] != '\n')
	{
		set.value[iset++] = data[i++];
	}
	set.value[iset] = '\0';
	return (set);
}

char	*get_value(t_dict dict, char *key)
{
	int	i;

	i = 0;
	while (dict[i].key != 0)
	{
		if (ft_str_equal(dict[i].key, key))
			return (dict[i].value);
		i++;
	}
	write(1, "Dict Error\n", 11);
	return (0);
}

void	free_dict(t_dict dict)
{
	int	i;

	i = 0;
	while (dict[i].value != 0)
	{
		free(dict[i].value);
		free(dict[i].key);
		i++;
	}
	free(dict);
}
