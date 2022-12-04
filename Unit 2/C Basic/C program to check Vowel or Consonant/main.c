/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include "stdio.h"

void main ()
{

char alpha ;
printf("please enter the alphabet that you want:\n");
fflush(stdin); fflush(stdout);
scanf("%c",&alpha);
if((alpha>='a')&&(alpha<='z'))
	printf("it is vowel");
else if((alpha>='A')&&(alpha<='Z'))
	printf("it is Consonant");
else
printf("error input");
}
