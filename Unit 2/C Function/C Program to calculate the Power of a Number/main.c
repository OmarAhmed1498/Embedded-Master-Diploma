/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */


#include <stdio.h>
int GetPower(int num,int power);
void main (void)
{

	printf("the result=%d", GetPower(3,3));

}
int GetPower(int num,int power)
{
	if(power!=1)
		return num*GetPower(num,power-1);

}
