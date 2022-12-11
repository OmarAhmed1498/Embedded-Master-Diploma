/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include<stdio.h>
struct complex {
float real;
float imag;

};
struct complex add_complex(struct complex number1,struct complex number2);

void main(void)
{
struct complex number1 , number2;
printf("please enter the real number of first number\n");
fflush(stdin);fflush(stdout);
scanf("%f",&number1.real);
printf("please enter the imaginary number of first number\n");
fflush(stdin);fflush(stdout);
scanf("%f",&number1.imag);
printf("please enter the real number of second number\n");
fflush(stdin);fflush(stdout);
scanf("%f",&number2.real);
printf("please enter the imaginary number of second number\n");
fflush(stdin);fflush(stdout);
scanf("%f",&number2.imag);
struct complex result=add_complex(number1,number2);
printf("the result=%0.1f + %0.1f i\n",result.real,result.imag);

}
struct complex add_complex(struct complex number1,struct complex number2)
{
	struct complex result ;
	result.imag=number1.imag+number2.imag;
	result.real=number1.real+number2.real;
	return result ;
}
