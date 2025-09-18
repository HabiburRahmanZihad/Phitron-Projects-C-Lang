#include <stdio.h>


int swap(int *x, int *y){
  int temp = *x;
  *x = *y;
  *y = temp;
  return 0;
}


int main(){
  int a = 5;
  int b = 10;

  printf("Before swap: a = %d, b = %d\n", a, b);
  printf("Before swap Address: a = %p, b = %p\n", (void*)&a, (void*)&b);

  swap(&a, &b);

  printf("After swap: a = %d, b = %d\n", a, b);
  printf("After swap Address: a = %p, b = %p\n", (void*)&a, (void*)&b);

  return 0;
}
