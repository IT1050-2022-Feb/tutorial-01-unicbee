/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int mark1,mark2,avg;
  
  printf("Enter subject 1 marks : ");
  scanf("%d", &mark1);

  printf("\n Enter subject 2 marks : ");
  scanf("%d", &mark2);

  avg = (mark1+mark2)/2;

  printf("Average is : %d",avg);
    
  return 0;
}

