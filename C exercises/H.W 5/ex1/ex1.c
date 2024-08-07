/*
 * ex1.c
 *
 *  Created on: Jul 27, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

struct student
{
	char  name[20];
	int	  age;
	float marks;
};


int main()
{
	struct student s1 ;


	printf(" enter your name , age and marks \n");

	fflush(stdout);

	scanf("%s %d %f",s1.name,&s1.age,&s1.marks);

	printf(" your name is %s and age is  %d and marks are %.3f",s1.name,s1.age,s1.marks);
}
