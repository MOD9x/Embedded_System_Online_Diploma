/*
 * ex2.c
 *
 *  Created on: Jun 4, 2024
 *      Author: mod_n
 *
 *     ex2 : check vowel or consonant
 */


#include<stdio.h>

int main()
{
	char x1=0;
	printf("Enter a character :\n");
	fflush(stdout);
	scanf("%c",&x1);

	switch(x1)
	{
		case 'i':
		case 'I':
			printf("%c is a vowel",x1);
			break;

		case 'a':
		case 'A':
			printf("%c is a vowel",x1);
			break;

		case 'o':
		case 'O':
			printf("%c is a vowel",x1);
			break;

		case 'E':
		case 'e':
			printf("%c is a vowel",x1);
			break;

		case 'U':
		case 'u':
			printf("%c is a vowel",x1);
			break;

		default:
			printf("%c is a consonant",x1);
			break;
	}

}
