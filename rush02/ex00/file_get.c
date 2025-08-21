/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-jong <ede-jong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:58:45 by ede-jong          #+#    #+#             */
/*   Updated: 2025/08/17 18:16:29 by ede-jong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include "dict.h"

void	*get_file_data(char *filename, int bytes);
int		get_file_lines(char *data, int size);
int		get_file_size(char *filename);
int		can_make_dict(char *data);
t_dict	file_to_dict(char *filename);
t_dict	make_dict(char *data, int lines);

void	*get_file_data(char *filename, int bytes)
{
	void	*data;
	int		desc;

	desc = open(filename, O_RDONLY);
	data = malloc(bytes);
	if (data == 0)
	{
		write(1, "Malloc Error\n", 13);
		return (0);
	}
	read(desc, data, bytes);
	close(desc);
	return (data);
}

int	get_file_lines(char *data, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < size && data[i])
	{
		if (data[i] == '\n' && data[i + 1] != '\n')
			count++;
		i++;
	}
	return (count);
}

int	get_file_size(char *filename)
{
	int		num;
	int		end;
	int		i;
	char	*data;

	num = 0;
	i = 0;
	end = 0;
	while (end == 0)
	{
		num += 100;
		data = get_file_data(filename, num);
		if (data == 0)
			return (-1);
		while (i < num)
		{
			if (data[i++] == 0)
			{
				end = 1;
				break ;
			}
		}
		free(data);
	}
	return (i);
}

t_dict	file_to_dict(char *filename)
{
	int		size;
	char	*data;
	int		lines;
	t_dict	dict;

	size = 0;
	size = get_file_size(filename);
	if (size == -1)
		return (0);
	data = (char *) get_file_data(filename, size);
	if (data == 0)
		return (0);
	if (!can_make_dict(data))
	{
		write(1, "Dict Error\n", 11);
		free(data);
		return (0);
	}
	lines = get_file_lines(data, size);
	dict = make_dict(data, lines);
	free(data);
	if (dict == 0)
		write(1, "Malloc Error\n", 13);
	return (dict);
}

int	can_make_dict(char *data)
{
	int	i;

	i = 0;
	while (data[i])
	{
		if (data[i] < '0' && data[i] > '9')
			return (0);
		while (data[i] != ' ' && data[i] != ':')
		{
			if (data[i] < '0' || data[i] > '9')
				return (0);
			i++;
		}
		while (data[i] == ' ')
			i++;
		if (data[i] != ':')
			return (0);
		while (data[++i] != '\n')
			if (data[i] == '\0' || data[i] < 32 || data[i] > 126)
				return (0);
		while (data[i] == '\n')
			i++;
	}
	return (1);
}
