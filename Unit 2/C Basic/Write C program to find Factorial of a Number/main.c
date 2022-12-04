/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include "stdio.h"

void main ()
{
	int i ,num ,Fact=1;
	printf("please enter the Number:\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	if(num>0)
	{
		for(i=1;i<=num;i++)
		{

			Fact=Fact*i;

		}
		printf("sum=%d",Fact);
	}
	else if(num<0)
		printf("The entered Number is Negative \n")	;


}
