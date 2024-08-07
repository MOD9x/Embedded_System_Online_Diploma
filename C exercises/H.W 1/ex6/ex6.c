/*
 * ex6.c
 *
 *  Created on: Jun 3, 2024
 *      Author: mod_n
 */

#include<stdio.h>

int main()
{
	int x1=0,x2=0,temp;
	printf("Enter value of a:\n");
	fflush(stdout);
	scanf("%d",&x1);

	printf("Enter value of b:\n");
	fflush(stdout);
	scanf("%d",&x2);

	temp=x1;
	x1=x2;
	x2=temp;

	printf("After swapping, value of a = %d\nAfter swapping, value of b = %d",x1,x2);
}




