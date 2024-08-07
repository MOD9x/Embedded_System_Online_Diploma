/*
 * ex7.c
 *
 *  Created on: Jul 30, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

#define ARR_SIZE 7

int sum( int a );

int main()
{
	printf("%d ",sum( 100 ) );
}

int sum( int a )
{

	if(a == 1 )
	{
		return a ;
	}

	else
	{
		return ( sum(a-1) + a ) ;
	}
}


