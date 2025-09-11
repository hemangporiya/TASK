#include<stdio.h>
#include<conio.h>

void main()
{
 int number;
 int square_result;
 int cube_result;
 
 printf("enter an int:  ");
 scanf("%d",  &number);
 
 square_result=number * number;
 
 cube_result=number*number*number;
 
 printf("the square of %d is: %d\n, number, square_result");
 printf("the cube of %d is: %d\n", number, cube_result);
 
 return 0;
 
 getch();
 }