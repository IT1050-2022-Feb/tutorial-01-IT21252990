/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() 
{
  //variables
  int n  , sum ,x ;

  //get inputs from user
  printf("Enter the Number You want to get sum : ") ;
  scanf("%d" , &n) ;

  //calcilation
  sum = n*(n+1) / 2 ;

  //display result
  printf("The Sum is : %d\n" , sum ) ;
  
  return 0;
}

