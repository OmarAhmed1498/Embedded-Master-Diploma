/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include "stdio.h"

void main ()
{
int num ;
printf("please enter the Number :\n");
fflush(stdin); fflush(stdout);
scanf("%d",&num);
if(num>0)
printf("The entered Number is Positive \n");
else if(num<0)
printf("The entered Number is Negative \n")	;
else
printf("The entered Number is zero \n")	;

}
