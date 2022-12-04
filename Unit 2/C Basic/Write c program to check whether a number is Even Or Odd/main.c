/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include "stdio.h"

void main ()
{

int number;
printf("please enter the number :\n");
fflush(stdin);fflush(stdout);
scanf("%d",&number);
if(number%2==0)
printf("the input number is Even Number:\n");
else
printf("the input number is Odd Number:\n");

}

