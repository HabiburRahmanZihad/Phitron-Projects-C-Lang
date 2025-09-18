#include <stdio.h>

void add(int a, int b) {
  printf("Adding %d and %d\n", a, b);
  int sum = a + b;
  printf("The sum is: %d\n", sum);
}

void alphaCheck(char x){

  if ('a'<= x && x <= 'z'){
    printf("%c is a lowercase letter\n", x);
  }
  else if ('A'<= x && x <= 'Z'){
    printf("%c is an uppercase letter\n", x);
  }
  else{
    printf("%c is not an alphabet\n", x);
  }
}

int main() {

    // int a , b;

    // scanf("%d %d", &a, &b);

    // add(a, b);

    char ch;
    scanf(" %c", &ch);
    alphaCheck(ch);

    return 0;
}