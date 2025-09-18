#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main (){
  double a= 4;


  // printf("%.lf\n", floor(a)); // Floor means the largest integer less than or equal to a given number

  // printf("%.lf\n", ceil(a)); // Ceil means the smallest integer greater than or equal to a given number

  // printf("%.lf\n", round(a)); // Round means to round to the nearest integer


  printf("%.2lf\n", sqrt(a)); // Square root

  printf("%.lf\n", pow(a, 3)); // Power
  return 0;
}