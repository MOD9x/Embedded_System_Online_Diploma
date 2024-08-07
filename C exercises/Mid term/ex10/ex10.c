	/*
 * ex10.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */



#include<stdio.h>

int counter(unsigned int a);

int main(){
	unsigned int a;

	printf("enter an integer number\n");
	fflush(stdout);
	scanf("%u",&a);

	printf("the max consecutive 1’s of %u = %d",a,counter(a));
}

int counter(unsigned int a){
	int num , max=0 ;
	unsigned int i=0x8000;


	while(i!=0){

		if(i & a){
			num++;
			if(num>max)
				max=num;
	}
		else
			num=0;
		i=i>>1;

	}
	return max;
}
