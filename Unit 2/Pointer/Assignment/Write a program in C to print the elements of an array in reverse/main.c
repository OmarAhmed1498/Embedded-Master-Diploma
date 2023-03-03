/*
 * main.c
 *
 *  Created on: Dec 5, 2022
 *      Author: omar
 */


#include <stdio.h>
void ReverseArray(int *arr,int size);
void main(void)
{int i;
	int arr [8]={1,2,3,4,5,6,7,8};
ReverseArray(arr,8);
for(i=0;i<8;i++)
{
	printf("the element[%d]=%d\n",i+1,arr[i]);
}

}
void ReverseArray(int *arr,int size)
{int i;
int *str=arr;
for(i=0;i<size/2;i++)
{
	int temp=*(str+i);
	*(str+i)=*(str-1+size-i);
	*(str-1+size-i)=temp;
}


}

