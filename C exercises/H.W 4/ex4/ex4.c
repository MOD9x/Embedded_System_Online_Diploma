/*
 * ex4.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *
 *      ex4: power of number by recursive functions
 */

#include<stdio.h>

int PowerOfNumber(int x ,int n)
{
	if(n) /* base > 0 */
	{
		return x*PowerOfNumber(x,n-1);
	}

	else /* base is zero */
	{
		return 1;
	}
	return 1;
}

int main()
{
	int x1,x2;

	printf("enter base and power: ");
	fflush(stdout);
	scanf("%d %d",&x1,&x2);

	printf("%d ^ %d = %d",x1,x2,PowerOfNumber( x1 ,x2) );

}






