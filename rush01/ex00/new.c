#include <stdio.h>
	


void	test(void)
{
	int	i;
	//char	*col[7];
	i = 0;
	int x = 0;
	char *col[2][4] = {{0,0,0,0},{0,0,0,0}};
	char *str = "4 3 2 1 1 2 3 4";
	while (i <= 6 && x <= 4)
	{	
	//const size_t capacity = sizeof(A) / sizeof(A[0]);
	

	col[0][x] = &str[i];
	//write(1,&col,1);
	printf("\ncol: %s", col[0][x]);
	x++;
	i++;
	i++;
	}
	//printf("col: %s", *col);

}
//printf("\ni: %c", argv[1][6]);




int	main(void)
{
	test();
	return (0);
}
