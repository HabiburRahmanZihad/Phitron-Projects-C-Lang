#include <stdio.h>

void printDigits(int n) {
    if (n == 0) {
        return;
    }

    printDigits(n / 10);

    printf("%d ", n % 10);

}


int main() {
    int t;
    scanf("%d", &t);

    for (int cs = 1; cs <= t; cs++) {
        int n;
        scanf("%d", &n);

      if (n == 0) {
          printf("0\n");
          continue;
      }

        printDigits(n);
        printf("\n");
    }
    return 0;
}