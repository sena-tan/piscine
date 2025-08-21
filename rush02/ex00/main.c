/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ede-jong <ede-jong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 20:02:40 by shselima          #+#    #+#             */
/*   Updated: 2025/08/17 19:34:39 by ede-jong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include "dict.h"

void	print_start(t_dict dict, char *numstr);
void	free_dict(t_dict dict);
t_dict	file_to_dict(char *filename);

int	check_error(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		write(1, "Error\n", 6);
		return (1);
	}
	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (0);
}

int	open_error(char *filename)
{
	int	desc;

	desc = open(filename, O_RDONLY);
	if (desc == -1)
	{
		write(1, "Dict Error\n", 11);
		return (1);
	}
	else
	{
		close(desc);
		return (0);
	}
}

void	run_print(char *filename, char *numstr)
{
	t_dict	dict;

	dict = file_to_dict(filename);
	if (dict != 0)
	{
		print_start(dict, numstr);
		free_dict(dict);
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		if (check_error(av[1]))
			return (0);
		run_print("numbers.dict", av[1]);
	}
	else if (ac == 3)
	{
		if (check_error(av[2]) || open_error(av[1]))
			return (0);
		run_print(av[1], av[2]);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
