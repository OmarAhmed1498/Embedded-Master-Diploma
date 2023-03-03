/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: omar
 */
#include <stdio.h>
void main (void )
{
int m=29;
int *ab=&m;
printf("the address of m =%p\n",ab);
printf("content of m=%d\n",*ab);
m=30;
printf("The value of m assigned to 30 now. :\n");
printf("the address of m =%p\n",ab);
printf("content of m=%d\n",*ab);
*ab=7;
printf("The pointer variable ab is assigned with the value 7 now. \n");
printf("the address of m =%p\n",ab);
printf("value of m=%d\n",*ab);


}

