/*
 * ex2.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex3 : matrix average
 */

#include<stdio.h>

#define SIZE 30

int main()
{
	float array1[SIZE],avg=0;
	int i,counter=4;

	printf("Enter the num of elements :\t");
	fflush(stdout);
	scanf("%d",&counter );

	for(i=0;i<counter;i++)
	{
		printf("Enter a[%d] :\t",i);
		fflush(stdout);
		scanf("%f",&array1[i]);
		avg += array1[i];
	}

	printf("Average = %f ",(float)avg/counter);

}



