/*
 * ex1.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *     ex1 : check even or odd
 */

#include<stdio.h>

int main()
{
	int x1=0;
	printf("Enter value :\n");
	fflush(stdout);
	scanf("%d",&x1);

	if( x1 & 1 )
	{
		printf("%d is odd ",x1);
	}

	else
	{
		printf("%d is even ",x1);
	}

}


