/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */


#include<stdio.h>
void ReverseString(void);
void main(void)
{
	ReverseString();

}
void ReverseString(void)
{
	char c ;
	scanf("%c",&c);
	if(c!='\n')
	{
		ReverseString();
		printf("%c",c);
	}



}
