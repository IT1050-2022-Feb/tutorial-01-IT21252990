/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  //diclare variables
  float mark1 , mark2 , avg ;

  //get inputs from user
  printf("Enter the Mark 01 : ") ;
  scanf("%f" , &mark1) ;

  printf("Enter the Mark 02 : ") ;
  scanf("%f" , &mark2) ;

  //calculation
  avg = (mark1 + mark2) / 2 ;

  //display part
  printf("The Average Mark is : %.2f\n" , avg) ;
  
  return 0;
}

