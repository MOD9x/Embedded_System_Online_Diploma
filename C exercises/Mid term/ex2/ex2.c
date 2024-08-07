/*
 * ex2.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */


#include <stdio.h>
#include <math.h> /* for sqrt function */

int main()
{
    int input;
    float root;
    printf("Please enter the required number : ");
    fflush(stdout);
    scanf("%d",&input);
    root=sqrt(input);

    printf("%f is the perfect square root of %d",root,input);

    return 0;
}
