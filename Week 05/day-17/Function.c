#include <stdio.h>
#include <stdlib.h>


int add(int a, int b){
  printf("Adding %d and %d\n", a, b);
  int sum = a + b;
  return sum;
  // return a + b;
}

int main(){
  // int result = add(5, 10);

  // printf("The sum is: %d\n", result);

  printf("Before\n");

  printf("The sum is: %d\n", add(5, 10));

  printf("After\n");

  printf("The sum is: %d\n", add(50, 100));

  return 0;
}