/*
 * ex3.c
 *
 *  Created on: Jul 27, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

struct complex
{
	float real;
	float imagine;
};


int main()
{
	struct complex n1 , n2 , sum = { 0 , 0 };


	printf(" enter 1st number  \n");

	fflush(stdout);

	scanf("%f %f",&n1.real,&n1.imagine);

	printf(" enter 2nd number  \n");

	fflush(stdout);

	scanf("%f %f",&n2.real,&n2.imagine);

	sum.real = n1.real + n2.real ;

	sum.imagine = n1.imagine + n2.imagine ;

	printf(" sum of numbers = %.3f + %.3f i ",sum.real,sum.imagine);
}
