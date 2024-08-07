/*
 * ex1.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */


#include <stdio.h>

int main()
{
	int m = 29;

	int *ab ;

	printf("Address of m : %p \n  Value of m : %d\n\n",&m,m);

	ab = &m;

	printf("Now ab is assigned with the address of m. \n\nAddress of pointer ab  : %p \n  Value of pointer ab  : %d\n\n",ab,*ab);

	m = 34;

	printf("The value of m assigned to 34 now.\n\nAddress of pointer ab  : %p \n  Value of pointer ab  : %d\n\n",ab,*ab);

	*ab = 7;

	printf("The pointer variable ab is assigned with the value 7 now.\n\nAddress of m : %p \n  Value of m : %d\n\n",&m,m);


}

