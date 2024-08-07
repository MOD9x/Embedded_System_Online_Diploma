/*
 * ex5.c
 *
 *  Created on: Jul 29, 2024
 *      Author: MOD nine
 */


#include<stdio.h>

struct  Employee
{
	char  name[20];
	int	  id;
};


int main()
{

	struct Employee emp = {"MOD9",9};

	struct Employee * Ptr_arrEmployees[10] ;

	struct Employee ** PtrEmployee = Ptr_arrEmployees;

	Ptr_arrEmployees[0] = &emp ;


		printf("name : %s\n ID : %d\n",(*(*PtrEmployee)).name,(*(*PtrEmployee)).id);

}
