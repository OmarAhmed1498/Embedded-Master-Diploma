/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
#include <stdio.h>
#include <stdlib.h>
static float arr_t[10][10];
void Get_2D_array(float arr[][10],int row,int col  );
void Print_2D_array(float arr[][10],int row ,int col );
void Array_Transpose(float arr[][10],int row ,int col);
int main()
{
	int row ,col ;
	float arr[10][10];
	printf("please enter the size of array row and column :\n");
	fflush(stdin);fflush(stdout);
	scanf("%d%d",&row,&col);
	Get_2D_array(arr,row,col);
	printf("before transpose:\n");
	Print_2D_array(arr,row,col);
	Array_Transpose(arr,row,col);
	printf("after transpose:\n");
	Print_2D_array(arr_t,row,col);



	return 0;
}

void Get_2D_array(float arr[][10],int row,int col  )
{int counter1 ,counter2 ;
for(counter1=0;counter1<row;counter1++)
{
	for(counter2=0;counter2<col;counter2++)
	{
		printf("Please Enter The Elements of an array[%d][%d]=",counter1+1,counter2+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[counter1][counter2]);
	}
}}
void Print_2D_array(float arr[][10],int row ,int col )
{int counter1 ,counter2 ;
for(counter1=0;counter1<row;counter1++)
{
	for(counter2=0;counter2<col;counter2++)
	{
		printf(" The Elements of an array[%d][%d]=%f :\n",counter1+1,counter2+1,arr[counter1][counter2]);
		if(counter2==col-1)
			printf("\n\n");

	}
}
}
void Array_Transpose(float arr[][10],int row ,int col)
{
	int counter1 ,counter2 ;
	for(counter1=0;counter1<row;counter1++)
		for(counter2=0;counter2<col;counter2++)
			arr_t[counter2][counter1]=arr[counter1][counter2];

}

