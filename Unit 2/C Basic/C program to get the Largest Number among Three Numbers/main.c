/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include "stdio.h"

void main ()
{
int num1 , num2 ,num3 ;
printf("please enter the Three Numbers :\n");
fflush(stdin); fflush(stdout);
scanf("%d%d%d",&num1,&num2,&num3);
if((num1>num2)&&(num1>num3))

printf("The Largest Number is %d",num1);
else if((num2>num1)&&(num2>num3))
printf("The Largest Number is %d",num2);
else
printf("The Largest Number is %d",num3);


}
