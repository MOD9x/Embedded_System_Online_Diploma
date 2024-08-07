/*
 * ex6.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex6 : calculate sum of natural numbers
 */

#include<stdio.h>

int main()
{
	int x1=0,i=0,sum=0;
	printf("Enter a value :\n");
	fflush(stdout);
	scanf("%d",&x1);

	for(i=0;i<=x1;i++)
	{
		sum +=i;
	}

	printf("sum = %d",sum);
}



