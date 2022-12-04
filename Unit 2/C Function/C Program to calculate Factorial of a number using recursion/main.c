/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include<stdio.h>
int GetFactorial(int number);
int main (void )
{

	int x=5;
	printf("Factorial of %d=%d",x,GetFactorial(x));



	return 0;
}

int GetFactorial(int number)
{

if(number!=1)
	return number*GetFactorial(number-1);

}
