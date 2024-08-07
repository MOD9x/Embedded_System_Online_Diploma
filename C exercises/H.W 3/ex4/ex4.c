/*
 * ex4.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *      ex4 : element inserting in array
 */

#include<stdio.h>

#define SIZE 30

int main()
{
	int array1[SIZE];
	int i,element,position,size,temp;

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

	printf("Enter element to be inserted :\t");
	fflush(stdout);
	scanf("%d",&element );

	printf("Enter the location :\t");
	fflush(stdout);
	scanf("%d",&position );

	/* array 1 inserting ... */
	for(i=0;i<size+1;i++)
	{
		if(i>=position)
		{
			temp       = array1[i];
			array1[i] = element;
			element   = temp;

		}
			printf("a[%d] = %d\t",i,array1[i]);
	}
}




