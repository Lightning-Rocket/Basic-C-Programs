// 2D Array: Matrix Addition

# include <stdio.h>

main()
{
	int mat1[5][5], mat2[5][5], addMat[5][5];
	int row, col, i, j;
	
	printf("Enter number of rows: ");
	scanf("%d", &row);
	printf("Enter number of columns: ");
	scanf("%d", &col);
	
	printf("Enter Matrix-1 values:\n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			scanf("%d", &mat1[i][j]);
		}
	}
	printf("Enter Matrix-2 values:\n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			scanf("%d", &mat2[i][j]);
		}
	}
	
	printf("Addition Matrix:\n");
	for (i=0; i<row; i++)
	{
		for (j=0; j<col; j++)
		{
			addMat[i][j] = mat1[i][j] + mat2[i][j];
			printf("%d ", addMat[i][j]);
		}
		printf("\n");
	}
	
	getch();
}