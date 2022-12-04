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
void Insertion_Array(float *arr,int size ,int number, int Index);
#define Initial_Value 0
int main()
{
	float arr[10];
	int size,Index,Number ;
	printf("please enter the size of an array :\n");
	fflush(stdin); fflush(stdout);
	scanf("%d",&size);
	Get_Array(arr,size);
	printf("before Insertion\n");
	Print_Array(arr,size);
	printf("please enter the number and its index:\n");
	fflush(stdin); fflush(stdout);
	scanf("%d%d",&Number,&Index);
	Insertion_Array(arr,size,Number,Index);
	printf("after Insertion\n");
	Print_Array(arr,size+1);


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
void Insertion_Array(float *arr,int size ,int number, int Index)
{int counter ;
arr[size]=number;
for(counter=size;counter>=Index;counter--)
{
	int temp=arr[counter];
	arr[counter]=arr[counter-1];
	arr[counter-1]=temp;
}

}

