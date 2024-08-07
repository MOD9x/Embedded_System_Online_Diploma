/*
 * ex2.c
 *
 *  Created on: Jul 27, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

struct distance
{
	int	  feet;
	float inch;
};


int main()
{
	struct distance d1 , d2 , sum = { 0 , 0 };


	printf(" enter 1st distance  \n");

	fflush(stdout);

	scanf("%d %f",&d1.feet,&d1.inch);

	printf(" enter 2nd distance  \n");

	fflush(stdout);

	scanf("%d %f",&d2.feet,&d2.inch);

	sum.feet = d1.feet + d2.feet ;

	sum.inch = d1.inch + d2.inch ;

	while(sum.inch >= 12 )
	{
		sum.inch -= 12;

		sum.feet ++;
	}


	printf(" sum of distance = %d feet(s) . %.3f inch(es) ",sum.feet,sum.inch);
}
