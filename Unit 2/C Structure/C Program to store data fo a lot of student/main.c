/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include <stdio.h>
struct student {char name [50];
int roll ;float marks ;};
void main (void)
{int i;
struct student person1[3] ;
printf("please enter the information\n ");
for(i=0;i<2;i++)
{	printf("For the roll %d:\n",i+1);
	printf("Enter the name of student:\n");
	fflush(stdin);fflush(stdout);
	gets(person1[i].name);
	printf("please enter the marks of student;\n");
	fflush(stdin);fflush(stdout);
	scanf("%f",&person1[i].marks);}
printf("Display the information:\n");
for(i=0;i<2;i++)
{printf("for roll %d\n",i+1);
printf("Name of student is %s\n",person1[i].name);
printf("marks of student=%f\n",person1[i].marks);}}
