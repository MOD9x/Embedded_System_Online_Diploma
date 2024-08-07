/*
 * ex8.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *     ex8 : simple calculator
 */


#include<stdio.h>

int main()
{
	float x1=0,x2=0;
	char operator=0;
	printf("Enter the operator ( + , - , / or * ) :\n");
	fflush(stdout);
	scanf("%c",&operator);

	printf("Enter two operands :\n");
	fflush(stdout);
	scanf("%f %f",&x1,&x2);


	switch(operator)
	{
		case '-':
			printf("%f - %f = %f ",x1,x2,x1-x2);
			break;

		case '+':
			printf("%f + %f = %f ",x1,x2,x1+x2);
			break;

		case '/':
			printf("%f / %f = %f ",x1,x2,x1/x2);
			break;

		case '*':
			printf("%f * %f = %f ",x1,x2,x1*x2);
			break;


		default:
			printf("wrong operator");
			break;
	}

}


