/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include "stdio.h"
int number1=20 , number2=30;
void main ()
{
int temp;
printf("Before the swap:\n");
printf("the first number =%d\n",number1);
printf("the second number =%d\n",number2);
printf("After the swap:\n");
temp=number1;
number1=number2;
number2=temp ;
printf("the first number =%d\n",number1);
printf("the second number =%d\n",number2);


}
