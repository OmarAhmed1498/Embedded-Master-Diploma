/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include <stdio.h>
void main ()
{
int i ,num ,sum=0;
printf("please enter the size of numbers:\n");
fflush(stdin); fflush(stdout);
scanf("%d",&num);
for(i=1;i<=num;i++)
sum=sum+i;
printf("sum=%d",sum);
}
