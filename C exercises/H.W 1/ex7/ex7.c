/*
 * ex7.c
 *
 *  Created on: Jun 3, 2024
 *      Author: mod_n
 */

#include<stdio.h>

int main()
{
	int x1=0,x2=0;
	printf("Enter value of a:\n");
	fflush(stdout);
	scanf("%d",&x1);

	printf("Enter value of b:\n");
	fflush(stdout);
	scanf("%d",&x2);

	x1  ^=x2;
	x2  ^=x1;
	x1  ^=x2;

/*	x1=0001
	x2=1000

	new x1=1001
	new x2=0001
	new x1=1000
*/

/*
   ( another solution)

  	x1  =x1+x2;
	x2  =x1-x2;
	x1  =x1-x2;
*/
	printf("After swapping, value of a = %d\nAfter swapping, value of b = %d",x1,x2);
}



