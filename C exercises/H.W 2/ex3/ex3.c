/*
 * ex3.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex3 : find largest number
 */




#include<stdio.h>

int main()
{
	float x1=0,x2=0,x3=0;
	printf("Enter value of a :\n");
	fflush(stdout);
	scanf("%f",&x1);

	printf("Enter value of b :\n");
	fflush(stdout);
	scanf("%f",&x2);

	printf("Enter value of c :\n");
	fflush(stdout);
	scanf("%f",&x3);

	if( x1 >= x2 && x1 >= x3 )
	{
		printf("Largest number is : %f",x1);
	}

	else if( x2 >= x1 && x2 >= x3 )
	{
		printf("Largest number is : %f",x2);
	}

	else
	{
		printf("Largest number is : %f",x3);
	}
}
