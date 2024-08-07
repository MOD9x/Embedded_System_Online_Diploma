/*
 * ex4.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */

#include <stdio.h>

#define SIZE 15


int main()
{
	int arr[SIZE] = {0} , i = 0 , user_size =0;

	int *ab = arr;

	printf("enter the number of elements\n");
	fflush(stdout);

	scanf("%d",&user_size);

	for(i=0;i<user_size;i++)
	{
		printf("enter the element (%d) \n",i+1);
		fflush(stdout);

		scanf("%d",&arr[i]);

	}

	while( *(ab+1) != 0)
	{
		ab++;
	}


	while( ab >= arr )
	{
		printf("%d\t",*ab);

		ab--;
	}

}
