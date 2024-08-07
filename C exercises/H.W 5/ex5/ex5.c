/*
 * ex5.c
 *
 *  Created on: Jul 27, 2024
 *      Author: MOD nine
 */



#include<stdio.h>

#define AREA_OF_CIRCLE(R) (3.14159 * (R) * (R) )



int main()
{
	float r=0 , area = 0 ;

		printf(" enter the radius of the circle \n");

		fflush(stdout);

		scanf("%f",&r);

		area = AREA_OF_CIRCLE(r);

		printf(" the area of the circle = %.3f \n",area);

}
