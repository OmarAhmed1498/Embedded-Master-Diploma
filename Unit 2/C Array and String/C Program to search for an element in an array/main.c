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
int Search_Element(float *arr ,int size,int element );
#define Initial_Value 0
int main()
{
	float arr[10];
	int size,Number ;
	printf("please enter the size of an array :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	Get_Array(arr,size);
	printf("please enter the element:\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&Number);
	int loaction=Search_Element(arr,size,Number);
	printf("the Location of Required element=%d",loaction+1);


	return 0;
}
void Get_Array(float *arr,int size)
{
	int counter ;
	for(counter=Initial_Value;counter<size;counter++)
	{
		printf("Please enter the element [%d]=\n",counter+1);
		fflush(stdin);fflush(stdout);
		scanf("%f",&arr[counter]);
	}
}
void Print_Array(float *arr,int size)
{
	int counter ;
	for(counter=Initial_Value;counter<size;counter++)
	{
		printf("Element[%d]=%f\n",counter+1,arr[counter]);
	}

}
int Search_Element(float *arr ,int size,int element )
{int location ,counter ;
for(counter=Initial_Value;counter<size;counter++)
{
	if(element==arr[counter])
	{
		location=counter;
	}

}
return location ;
}
