/*
 * ex8.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *      ex8 : reverse string
 */

#include<stdio.h>
#include<string.h>

#define SIZE 30

int main()
{
	char string[SIZE];
	int i=0;

	printf("Enter a string :\t");
	fflush(stdout);
	gets(string);
	/*
	 * or
	 * scanf("%s",string);
	 */

	while(string[i] != '\0')
	{

		i++;
	}

	i--;
	while(i != 0)
	{

		printf("%c",string[i]);
		i--;
	}

	printf("%c",string[i]);

}


