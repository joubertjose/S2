#include<stdio.h>
int main()
{
	int rows,columns;
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	printf("Enter the no of columns:");
	scanf("%d",&columns);
	int i,j;
	int matrix1[rows][columns],matrix2[rows][columns],result[rows][columns];
	printf("Enter elements of first matrix\n");
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&matrix1[i][j]);
		}
		}
		
	printf("Enter elements of second matrix\n");
	for(i=0;i<rows;i++)
		{
		for(j=0;j<columns;j++)
		{
			scanf("%d",&matrix2[i][j]);
		}
		}
		for(i=0;i<rows;i++)
		{
	for(j=0;j<columns;j++)
	{
	result[i][j]=matrix1[i][j]+matrix2[i][j];
	}
	}
	printf("Sum of the matrixes is:\n");
	for(i=0;i<rows;i++)
	{
	for(j=0;j<columns;j++)
	{
	printf("%d\t",result[i][j]);
	}
	printf("\n");
	}
	return 0;
	}








