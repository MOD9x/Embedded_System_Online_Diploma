/*
 * ex1.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *
 *      ex1: Prime numbers by functions
 */

#include<stdio.h>

void PrimeNumbers(int x1 , int x2)
{
	int i,j,counter=0;

	for(i=x1;i<x2;i++)
	{
		counter=0;
		for(j=1;j<=i/2;j++)
		{
			if( (i%j) == 0 )
			{
				counter++;
			}
		}

		if(counter == 1)
		{
			printf("%d\t",i);
		}
	}

}

int main()
{
	int x1,x2;

	printf("enter 2 numbers ( intervals ) : ");
	fflush(stdout);
	scanf("%d %d",&x1,&x2);

	PrimeNumbers( x1 , x2 );

}
