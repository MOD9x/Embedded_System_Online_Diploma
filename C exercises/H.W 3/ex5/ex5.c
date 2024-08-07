/*
 * ex5.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *      ex5 : element searching in array
 */

#include<stdio.h>

#define SIZE 30

int main()
{
	int array1[SIZE];
	int i,element,size;

	printf("Enter the number of elements :\t");
	fflush(stdout);
	scanf("%d",&size );

	/* array 1 initialization ... */
	for(i=0;i<size;i++)
	{
			printf("Enter a[%d] :\t",i);
			fflush(stdout);
			scanf("%d",&array1[i]);
	}

	printf("Enter element to be searched :\t");
	fflush(stdout);
	scanf("%d",&element );

	/* array 1 inserting ... */
	for(i=0;i<=size;i++)
	{
		if(array1[i]==element)
		{
			printf("number found at location = %d",i+1);
			break;
		}

	}

	if(i >= size)
	{
		printf("number not found ");
	}
}



