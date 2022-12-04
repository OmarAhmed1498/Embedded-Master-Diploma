/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include <stdio.h>
#include <stdlib.h>
int String_Length(char *arr  );
void Reverse_String(char *arr);
#define Initial_Value 0
int main()
{
	char name[100];
	printf("please enter the string :\n");
	fflush(stdin); fflush(stdout);
	gets(name);
	printf("After reversing :\n");
	Reverse_String(name);
puts(name);



	return 0;
}

int String_Length(char *arr  )
{int  counter ;
for(counter=Initial_Value;arr[counter]!=0;counter++)
{
}
return counter ;
}

void Reverse_String(char *arr)
{
	int  counter ;
int size=String_Length(arr);
	for(counter=Initial_Value;counter<size/2;counter++)
	{
		int temp=arr[counter];
		arr[counter]=arr[size-counter-1];
		arr[size-counter-1]=temp;

	}


}
