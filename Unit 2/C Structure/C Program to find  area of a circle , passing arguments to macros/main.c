/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include <stdio.h>
#define pi 3.14
#define area(r) (pi*(r)*(r))

void main(void)
{
	float Area ;
	float radius ;
	printf("please enter the radius of circle:\n");
	fflush(stdin);fflush(stdout);
scanf("%f",&radius);
Area=area(radius);
printf("Area of Circle =%0.1f ",Area);


}
