#include <stdio.h>

void add() {
  int a, b;
  scanf("%d %d", &a, &b);

  printf("Adding %d and %d\n", a, b);
  int sum = a + b;
  printf("The sum is: %d\n", sum);
}

void greet() {
  printf("Hello, welcome to the function demo!\n");
}

int main() {

    greet();
    add();

    return 0;
}

// int add (){
//   int a, b;
//   scanf("%d %d", &a, &b);
//   printf("Adding %d and %d\n", a, b);
//   int sum = a + b;
//   printf("The sum is: %d\n", sum);
//   return sum;
// }

// void multi(int x, int y){
//   int result = x * y;
//   printf("The Goonfol is: %d\n", result);
// }

// int main() {

//     multi(add(), 10);

//     // multi(add(), add());

//     return 0;
// }