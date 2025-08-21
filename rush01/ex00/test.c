matrix[0][0];

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gvan-box <gvan-box@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 11:08:45 by gvan-box          #+#    #+#             */
/*   Updated: 2025/08/09 11:58:18 by gvan-box         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rush01(char *str)
{
	int i;
	int x;
	int col_count = 0;
	int row_count = 0;
	char number_arr[] = {'1','2','3','4'};
	

	i = 0;
	x = 1;
	create matrix[4][4]
	while (str[i] != '\0')
	{
		while ( i <= 6)
		{
			if(str[i] == 4)
			{
				while(x <= 4){
					matrix[col_count][x] = write(x+48);
					x++;
				}
				x = 1;				
				i++;
				col_count++;
				
			}
			else if(str[i] == 1)
			{
				matrix[col_count][x] = 4+48;
				i++;
				col_count++;
			}
			i++;
			if(col_count == 4)
			{
				col_count = 0;
				row_count++;
			}
			
		}
		
		
	}
}



int	main(void)
{
	
	char *str;
	str = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";

	ft_rush01(str);
	return(0);
}
