#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void value_changer(int matrix[4][4], int n, int m, int i, int j, int k)
{
	
	
	matrix[i][j] = k;
	

	
}
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



void checker()
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
	int x = 0;	


	int i = 0;
	int j = 0;

	col_count = 0;
	row_count = 0;
	

	while (col_count < 4)
	{
		if (col[col_count][i] == 4)
		{				
			value_changer(matrix, 4, 4, col_count, i, 1);					
			col_count++;			
		}
		else if (col[col_count][i] == 1)
		{				
			value_changer(matrix, 4, 4, col_count, i, 4);					
			col_count++;			
		}
		else
		{

		}

		col_count++;

	}
	ft_grid(matrix, 4, 4);

	

}




int main(void)
{
	checker();
	return (0);
}