/*
 * ex6.c
 *
 *  Created on: Jun 5, 2024
 *      Author: MOD nine
 *      ex6 : frequency of character
 */

#include<stdio.h>
#include<string.h>

#define SIZE 30

int main()
{
	char string[SIZE],target;
	int i=0,counter=0;

	printf("Enter a string :\t");
	fflush(stdout);
	gets(string);
	/*
	 * or
	 * scanf("%s",string);
	 */

	printf("Enter a character to find his frequency :\t");
	fflush(stdout);
	scanf("%c",&target );


	while(string[i] != '\0')
	{
		if(string[i] == target)
		{
			counter++;
		}
		i++;
	}

	printf("frequency of %c = %d",target,counter);

}




