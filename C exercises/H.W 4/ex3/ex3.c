/*
 * ex3.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *
 *      ex3: reverse string by recursive functions
 */

#include<stdio.h>

#include<string.h>

#define SIZE 30


void ReverseSting(char * string)
{
	int i=0;

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

int main()
{
	char string[SIZE];

	printf("Enter a string :\t");
	fflush(stdout);
	gets(string);
	/*
	 * or
	 * scanf("%s",string);
	 */


	ReverseSting(string);

}






