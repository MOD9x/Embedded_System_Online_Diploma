/*
 * ex5.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */



#include<stdio.h>

int counter(unsigned long long  a);

int main(){
	unsigned long long a;

	printf("enter an unsigned number\n");
	fflush(stdout);
	scanf(" %llu",&a);

	printf("number of 1's = %d",counter(a));
}

int counter(unsigned long long a){
	unsigned long long b=0x80000000;
	int counter=0;

	while(a>0){
		if(a & b )
			counter ++;
		a=a<<1;
	}
	return counter ;
}
