/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include <stdio.h>
#include <stdlib.h>
void Get_Array(float *arr,int size);
void Print_Array(float *arr,int size);
int Search_char(char *arr ,char element );
#define Initial_Value 0
int main()
{
	char name[100],alpha;
	printf("please enter the string :\n");
	fflush(stdin); fflush(stdout);
	gets(name);
	printf("please enter the character :\n");
	fflush(stdin); fflush(stdout);
	scanf("%c",&alpha);
	int freq=Search_char(name,alpha);
	printf("frequency of char %c =%d",alpha,freq+1);


	return 0;
}

int Search_char(char *arr ,char element )
{int location ,counter ;
for(counter=Initial_Value;counter<strlen(arr);counter++)
{
	if(element==arr[counter])
	{
		location=counter;
	}

}
return location ;
}

