/*
 * ex4.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */



#include<stdio.h>

int main(){

	int a,b=0,c=0,i,j;

	printf("enter an integer number\n");
	fflush(stdout);

	scanf(" %d",&a);

	b=(a%10); // b= first digit of the a number
	i=a;

	for(j=i;i>10;j--){

		if((j%10)==0){

	i=j/10;
	c=(i%10);

	b=b*10;
	b=b+c;
	j=i;
		}

	}

	printf("%d",b);

}
