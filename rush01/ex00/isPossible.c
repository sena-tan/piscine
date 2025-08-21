void isPossible(matrix, int col_count, int row_count, int num)
{
	

	while (x <= 4)
	{
		if (matrix[row_count][x] == num)
		{
			x++;
			return(0);
		}
	}

	x = 0;
	
	while (x <= 4)
	{
		if (matrix[x][col_count] == num)
		{
			x++;
			return(0);
		}
	}
}