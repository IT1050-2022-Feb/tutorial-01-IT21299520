/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int m1 , m2 ;
  float avg=0 , tot=0 ;

  printf("Enter the Mark 1 : ");
  scanf("%d" , &m1);

  printf("Enter the Mark 2 : ");
  scanf("%d" , &m2);

  tot = m1 + m2 ;
  avg = tot / 2.0 ;

  printf("\nAverage : %.2f" , avg);
  
  return 0;
}

