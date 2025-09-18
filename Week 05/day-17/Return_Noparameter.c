#include <stdio.h>


int add() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("Adding %d and %d\n", a, b);
  return a + b;
}

double getpi() {
    return 3.14159;
}

int main() {

    // printf("The sum is: %d\n", add());

    printf("The value of pi is: %.5lf\n", getpi());

    return 0;
}