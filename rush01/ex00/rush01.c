#include <stdlib.h>
#include <unistd.h> 

void value_changer(int matrix[4][4], int n, int m, int i, int j, int k)
{	
	matrix[i][j] = k;	
}



int	ft_rush01(matrix[4][4], int n, int m, int col_count, int row_count)
{
	int n;
	n = 16;
	int i;
	int num;

	num = 1;
	

	i = 0;
	
	if (row_count == n -1 && col_count == n)
	{
		return (1);
	}

	if (col_count == n)
	{
		row_count++;
		col_count = 0;
	}
	if (matrix[row_count][col_count] != 0)
		return ft_rush01(matrix[4][4], 4, 4, col_count +1, row_count)
	while (i <= 4)
	{
		if (col[0][i] == 4)
		{				
			value_changer(matrix, 4, 4, col_count, i, 1);
			i++;
			col_count++;			
		}
		else if (col[1][i] == 1)
		{				
			value_changer(matrix, 4, 4, col_count, i, 4);					
			i++;
			col_count++;			
		}
		else
		{
			while (x <= 4)
			{
				if(isPossible(matrix[4][4], col_count, row_count, num))
				{
					matrix[row_count][col_count] = num;
					if (ft_rush01(matrix[4][4], 4, 4, col_count + 1, row_count))
						return(1);
					//matrix[row_cout][col_count] = 0;
				}
			}
		}
	}

}




