/*
 * ex1.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex1 : matrices summing
 */

#include<stdio.h>

int main()
{
		float array1[2][2]={0},array2[2][2]={0},array3[2][2]={0};
		int i,j;

		/* array 1 initialization ... */
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enter a[%d][%d] :\t",i,j);
				fflush(stdout);
				scanf("%f",&array1[i][j] );
			}
			printf("\n");
		}

		/* array 2 initialization ... */
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("Enter b[%d][%d] :\t",i,j);
				fflush(stdout);
				scanf("%f",&array2[i][j]);
			}
			printf("\n");
		}

		/* arrays addition ... */
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				array3[i][j] = array1[i][j] + array2[i][j];
			}
		}

		/* arrays addition display ... */
		printf("sum of matrices :\n");

		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			{
				printf("%f\t",array3[i][j]);

			}
			printf("\n");
		}

}





