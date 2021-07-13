/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  
  int no1, no2, total = 0;
  float avg = 0;
  
  printf("Enter number 1:");
  scanf("%d", &no1);

  printf("Enter number 2:");
  scanf("%d", &no2);
  total = no1+no2;
  avg = total/2.0;

  printf("Average is %.2f", avg);
  
  return 0;
}

