/*
 * ex9.c
 *
 *  Created on: Jul 30, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

#define ARR_SIZE 30

int main()
{
	char str[ARR_SIZE] = "mohamed gamal";

	char str2[ARR_SIZE] , *ptr = str , *ptr2;

	int  j = 0 ;

	while( (*ptr) != '\0')
	{
		ptr++;
	}

	while(ptr != str)
	{
		while( *(ptr) != ' ' && ptr != str)
		{
			ptr--;
		}

		ptr2 = ptr;

		if(*(ptr) == ' ')
		{
			ptr2++;

			ptr--;
		}

		while( *(ptr2) != ' ' && *(ptr2) != '\0')
		{
			str2[j] = *ptr2;

			ptr2++;
			j++;
		}

		str2[j] = ' ';
		j++;
	}

	str2[j] = '\0';

	printf("%s ",str2);
}
