#include <stdio.h>
#include <stdlib.h>


int main(){

  int a = 10;
  int *p = &a;
  int **q = &p;


printf("%d %d %d\n",&a, *p, **q);
}