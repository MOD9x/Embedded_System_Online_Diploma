/*
 * ex1.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */


#include <stdio.h>

int main()
{
    int num, sum = 0, remainder;

    printf("Enter an integer: ");
    fflush(stdout);
    scanf("%d", &num);

    while(num != 0)
    {
		/* Get the first digit from the right */
        remainder = num%10;

		/* in the reversedNumber(result number) multiply the old value by 10 to added ZERO to the right
		   then added the new digit(remainder) to the right */
        sum = sum + remainder;

		/* Divide number by 10 to get the next digit to right before the next loop iteration */
        num /= 10;
    }

    printf("sum of Numbers = %d", sum);

    return 0;
}
