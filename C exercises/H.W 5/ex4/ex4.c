/*
 * ex4.c
 *
 *  Created on: Jul 27, 2024
 *      Author: MOD nine
 */



#include<stdio.h>

struct student
{
	int	  roll;
	char  name[20];
	float marks;
};


int main()
{
	struct student students[10] ;
	int i=0;

	for(i=0;i<10;i++)
	{
		printf(" enter roll , name and marks of student %d\n",i+1);

		fflush(stdout);

		scanf("%d %s %f",&students[i].roll,students[i].name,&students[i].marks);
	}

	for(i=0;i<10;i++)
	{

		printf("roll : %d \n name : %s\n marks : %f\n",students[i].roll,students[i].name,students[i].marks);
	}

}
