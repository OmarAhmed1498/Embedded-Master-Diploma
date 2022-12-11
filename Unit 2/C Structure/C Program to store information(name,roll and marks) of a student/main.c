/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include <stdio.h>
struct student {
char name [50];
int roll ;
float marks ;
};
void main (void)
{
struct student person1 ;
printf("please enter the information\n ");
printf("Enter the name of student:\n");
fflush(stdin);fflush(stdout);
gets(person1.name);
printf("please enter the Roll of student:\n");
fflush(stdin);fflush(stdout);
scanf("%d",&person1.roll);
printf("please enter the marks of student;\n");
fflush(stdin);fflush(stdout);
scanf("%f",&person1.marks);
printf("Display the information:\n");
printf("Name of student is %s\n",person1.name);
printf("roll of student =%d\n",person1.roll);
printf("marks of student=%f\n",person1.marks);
}
