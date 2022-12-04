/*
 * main.c
 *
 *  Created on: Dec 4, 2022
 *      Author: omar
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char oper ;
   float num1 , num2 ,result;
          printf("please enter operator:\n");
   scanf("%c",&oper);
   printf("please enter the first number:\n");
   scanf("%f",&num1);
      printf("please enter the second number:\n");
   scanf("%f",&num2);

   switch (oper)
   {
 case '+':
    result=num1+num2 ;
  break ;
   case '-':
    result=num1-num2 ;
  break ;
    case '*':
    result=num1*num2 ;
  break ;
   case '/':
    result=num1+num2 ;
  break ;
   default :
    printf("wrong\n");
    break;
   }
   printf("the Result =%0.1f",result);
    return 0;
}
