/*
 * ex5.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *      ex5 : check aalphabet or not
 */

#include<stdio.h>

int main()
{
	char x1=0;
	printf("Enter a character :\n");
	fflush(stdout);
	scanf("%c",&x1);

	if( ( x1 >= 'a' && x1 <= 'z' ) || ( x1 >= 'A' && x1 <= 'Z' ) )
	{
		printf("%c is an alphabet",x1);
	}

	else
	{
		printf("%c is not an alphabet",x1);
	}
}

