/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include <stdio.h>
#include <stdlib.h>
int String_Length(char *arr  );
#define Initial_Value 0
int main()
{
	char name[100];
	printf("please enter the string :\n");
	fflush(stdin); fflush(stdout);
	gets(name);
	int length=String_Length(name);
	printf("the length of string=%d",length);




	return 0;
}

int String_Length(char *arr  )
{int  counter ;
for(counter=Initial_Value;arr[counter]!=0;counter++)
{
}
return counter ;
}
