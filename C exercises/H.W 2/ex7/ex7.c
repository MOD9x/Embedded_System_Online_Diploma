/*
 * ex7.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex7 : calculate factorial of number
 */

#include<stdio.h>

int main()
{
	int x1=0,i=0,factorial=1;
	printf("Enter a value :\n");
	fflush(stdout);
	scanf("%d",&x1);

	if(x1>1)
	{
		for(i=1;i<=x1;i++)
		{
			factorial *=i;
		}

		printf("factorial = %d",factorial);
	}

	else if( x1 < 0 )
	{
		printf("Error!!! factorial of negative number doesn't exist.");
	}

	else
	{
		printf("factorial = 1");

	}
}





