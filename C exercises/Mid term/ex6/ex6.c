/*
 * ex6.c
 *
 *  Created on: Jul 30, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

#define ARR_SIZE 7

int uni_number( int *arr , int arr_size);

int main()
{
	int arr[ARR_SIZE] = {4,2,5,2,5,7,4};



	printf("%d ",uni_number(arr , ARR_SIZE ) );
}

int uni_number( int *arr , int arr_size)
{
	int flag = 0 , counter=0 , mask = 0 , i = 0 , j=0;

	int * ptr=arr;


	while( ( flag == 0 ) && ( i != arr_size ) )
	{
		if(counter == 0 )
		{
			ptr = arr + i;

			mask = *ptr ;

			i++;

			j=0;

		}

		if( mask == *ptr)
		{
			counter++;
		}


		if( j == arr_size )
		{

			if(counter == 1 )
			{
				flag = 1 ;
			}

			else
			{
				counter = 0 ;
			}


		}

		ptr++;
		j++;

	}
	return mask;
}
