/*
 * ex2.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */


#include <stdio.h>

int main()
{
	char var = 'A';

	char *ab = &var;

	while( (*ab) <= 'Z')
	{
		printf("%c\t",*ab);

		(*ab)++;
	}

}

