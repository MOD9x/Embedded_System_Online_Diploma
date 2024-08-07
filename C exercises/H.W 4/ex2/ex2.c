/*
 * ex2.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *
 *      ex2: factorial by recursive functions
 */

#include<stdio.h>

int Factorial(int x)
{
	if(x)
	{
		return x*Factorial(x-1);
	}

	else
	{
		return 1;
	}

}

int main()
{
	int x1;

	printf("enter a number : ");
	fflush(stdout);
	scanf("%d",&x1);

	printf("%d",Factorial( x1 ) );

}



