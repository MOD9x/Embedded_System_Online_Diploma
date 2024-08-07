/*
 * ex3.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */



#include <stdio.h>

#define SIZE 20

int main()
{
	char str[SIZE] = "OLLEH" ;

	char *ab = str;

	char i = 0 , temp=0 ;

	while( *(ab+1) != '\0')
	{
		ab++;
	}


	while( str[i+1] != (*ab))
	{
		temp = (*ab);

		(*ab) = *(str+i);

		*(str+i) = temp;

		i++;

		ab--;
	}

	ab = str;

	printf("%s",ab);

}
