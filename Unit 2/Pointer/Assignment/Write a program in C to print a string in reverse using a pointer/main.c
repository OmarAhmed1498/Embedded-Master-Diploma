/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: omar
 */

#include <stdio.h>
void ReverseString(char *str);
void main(void)
{
	char str [50];
	gets(str);
	ReverseString(str);
	puts(str);
}
void ReverseString(char *str)
{int i;
int x=strlen(str);
for(i=0;i<x/2;i++)
{
	int temp=*(str+i);
	*(str+i)=*(str-1+x-i);
	*(str-1+x-i)=temp;
}


}
