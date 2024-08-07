/*
 * ex7.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *      ex7 : lenth of string
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

	printf("lenth of the string = %d",i);

}


