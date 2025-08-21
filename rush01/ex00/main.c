/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvan-box <gvan-box@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 17:37:54 by sbayrakt          #+#    #+#             */
/*   Updated: 2025/08/10 16:42:31 by gvan-box         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rush01(char *str);

void ft_grid(int matrix[4][4], int n, int m)
{

	int i;
	int j;

	i = 0;
	j = 0;
	while (i < 4)
	{
		while (j < 4)
		{
			printf("%d ", matrix[i][j]);
			
			j++;
		}
		write(1,"\n", 1);
		j= 0;
		i++;
	}
}

int	char_to_int(char i)
{
	int j;

	j = i - '0';
	return j;
}

int	is_true(int argc, char *argv[])
{
	int	i;
	int k;
	int l;
	int j;
	j = 16;
	i = 0;
	int col[2][4] = {{0,0,0,0},{0,0,0,0}};
	int row[2][4] = {{0,0,0,0},{0,0,0,0}};
	int x = 0;

	if (argc != 2)
	{
		write (1, "Error\n", 6);
		return (1);
	}
	while(i <= 30)
	{
		
		if (argv[1][i] == '\0' && i < 30 || i > 30)
		{
			write(1,"Error\n",6);
		}
		k = char_to_int(argv[1][i]);
		if (k > 4 || k < 1)
		{
			write(1,"Error\n",6);
		}
		i++;
	}
	
	if (*argv[1] != '\0')
	{
		while (i <= 6 && x <= 4 && j <= 22)
		{
			k = char_to_int(argv[1][i]);
			l = char_to_int(argv[1][j]);			
			
			col[0][x] = k;
			row[0][x] = l;
			x++;
			i+=2;			
			j+=2;			
		}
		x=0;
		while (i <= 14 && x <= 4 && j <= 30)
		{
			k = char_to_int(argv[1][i]);
			l = char_to_int(argv[1][j]);				
			
			col[1][x] = k;
			row[1][x] = l;
			x++;
			i+=2;
			j+=2;					
		}		
		
	}	
	return 0;
}
	

int main (int argc, char *argv[])
{
	int col[2][4] = {{4,0,0,0},{0,0,0,0}};
	int row[2][4] = {{0,0,0,0},{0,0,0,0}};
	int matrix[4][4] ={
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0},
		{0, 0, 0, 0}
	};	
	int col_count;
	int row_count;
		
	col_count = 0;
	row_count = 0;	

	is_true(argc, argv);
	//ft_rush01(matrix[4][4], 4, 4, col_count, row_count);
	ft_grid(matrix, 4, 4);

	return (0);

}
