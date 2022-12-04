/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */
void GetPrimeNumber(int num1 ,int num2);
int main  (void ){

	GetPrimeNumber(10,30);
	return 0 ;
}
void GetPrimeNumber(int num1 ,int num2)
{
int i,j ,flag=0;
for(i=num1+1;i<num2;i++)
{flag=0;
	for(j=2;j<i;j++)
	{
	if(i % j==0)
	{
		flag=1;
		break;
	}
	}
	if(flag==0){
printf("%d\n",i);}
}
}
