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
printf("please enter the Number :\n");
fflush(stdin); fflush(stdout);
scanf("%c",&alpha);
if(((alpha>='a')&&(alpha<='z'))||((alpha>='A')&&(alpha<='Z')))
		printf("the entered character is Alphabet\n");
else
	printf("the entered character is Not Alphabet\n");
}



