/*
 * ex3.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *      ex3 : matrix transpose
 */

#include<stdio.h>

#define SIZE 30

int main()
{
	int array1[SIZE][SIZE],array2[SIZE][SIZE];
	int i,j,rows,columns;

	printf("Enter the matrix rows and columns :\t");
	fflush(stdout);
	scanf("%d %d",&rows,&columns );

	/* matrix 1 initialization ... */
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("Enter a[%d][%d] :\t",i,j);
			fflush(stdout);
			scanf("%d",&array1[i][j]);
		}
	}

	/* matrix 1 display ... */
	printf("\nEntered Matrix \n");

	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{

			printf("a[%d][%d] = %d\t",i,j,array1[i][j]);

		}
		printf("\n");
	}

	/* matrix 2 display ... */
	printf("\nTranspose of Matrix \n");

	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{

			printf("b[%d][%d] = %d\t",i,j,array2[i][j]=array1[j][i]);

		}
		printf("\n");
	}

}





