/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */


#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2
static float arr3[ROW][COL];
void Get_2D_array(float arr[][COL],int row  );
void Print_2D_array(float arr[][COL],int row  );
void Sum_2D_array(float arr1[][COL],float arr2[][COL],int row );
int main()
{
	float Matrix1 [ROW][COL] , Matrix2[ROW][COL] ;
	printf("Please enter the elements of first array:\n");
	Get_2D_array(Matrix1,ROW);
	printf("Please enter the elements of second array:\n");
	Get_2D_array(Matrix2,ROW);
	Sum_2D_array(Matrix1,Matrix2,ROW);
	Print_2D_array(arr3,ROW);
	return 0;
}
void Get_2D_array(float arr[][COL],int row  )
{int counter1 ,counter2 ;
for(counter1=0;counter1<row;counter1++)
{
	for(counter2=0;counter2<COL;counter2++)
	{
		printf("Please Enter The Elements of an array[%d][%d]=",counter1+1,counter2+1);
		fflush(stdin); fflush(stdout);
		scanf("%f",&arr[counter1][counter2]);
	}
}
}
void Print_2D_array(float arr[][COL],int row  )
{int counter1 ,counter2 ;
for(counter1=0;counter1<row;counter1++)
{
	for(counter2=0;counter2<COL;counter2++)
	{
		printf(" The Elements of an array[%d][%d]=%f :\n",counter1+1,counter2+1,arr[counter1][counter2]);
	}
}
}
void Sum_2D_array(float arr1[][COL],float arr2[][COL],int row )
{
	int counter1 ,counter2 ;
	for(counter1=0;counter1<row;counter1++)
	{
		for(counter2=0;counter2<COL;counter2++)
		{
			arr3[counter1][counter2]=arr1[counter1][counter2]+arr2[counter1][counter2];

		}
	}}
