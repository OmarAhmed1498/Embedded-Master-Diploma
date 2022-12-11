/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
//1foot=12inch
#include <stdio.h>
struct add {
int feet ;
float inch ;
};
void main(void)
{
struct add distance1 ;
struct add distance2 ;
printf("please enter the feet of distance 1:\n");
fflush(stdin);fflush(stdout);
scanf("%d",&distance1.feet);
printf("please enter the inch of distance 1:\n");
fflush(stdin);fflush(stdout);
scanf("%f",&distance1.inch);
printf("please enter the feet of distance 2:\n");
fflush(stdin);fflush(stdout);
scanf("%d",&distance2.feet);
printf("please enter the inch of distance 2:\n");
fflush(stdin);fflush(stdout);
scanf("%f",&distance2.inch);
int total_feet=distance1.feet+distance2.feet;
float total_inch=distance1.inch+distance2.inch;
while(total_inch>=12.0)
{
	total_inch=total_inch-12.0;
	++total_feet;
}
printf("the result=%d\'-%0.1f\"",total_feet,total_inch);
}
