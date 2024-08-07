/*
 * ex3.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */



#include<stdio.h>

void prime(int a,int b);

int main(){

	int a,b;

	printf("enter the range u want to search in \n");
	fflush(stdout);
	scanf(" %d %d",&a,&b);

	prime(a,b);

}

void prime(int a , int b){
	int i,j,c;

	for(i=a;i<=b;i++){

    c=0;

    for(j=1;j<=i;j++){
    	if((i%j==0))
    		c++;
}
    if(c==2)
    	printf("%d is prime number\n",i);
	}
}
