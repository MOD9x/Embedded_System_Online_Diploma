/*
 * ex4.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex4 : check positive or negative or zero
 */

#include<stdio.h>

int main()
{
	float x1=0;
	printf("Enter value of a :\n");
	fflush(stdout);
	scanf("%f",&x1);

	if( x1 > 0 )
	{
		printf("%f is positive",x1);
	}

	else if( x1 < 0 )
	{
		printf("%f is negative",x1);
	}

	else
	{
		printf("you entered zero");
	}
}


