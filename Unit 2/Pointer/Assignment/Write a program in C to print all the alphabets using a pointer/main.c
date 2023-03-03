/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: omar
 */


#include<stdio.h>
void main(void)
{

char alpha[27];
char *ptr=alpha;
char i ;
int j;
for(i='A',j=0;i<='Z';i++,j++)
{
ptr[j]=i;
}

	for(i=0;i<26;i++)
	{
	printf("%c ",ptr[i]);

	}

}

