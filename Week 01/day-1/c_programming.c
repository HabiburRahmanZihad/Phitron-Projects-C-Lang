#include <stdio.h>

// int main() {
//     long long int a; // variable declaration

//     scanf("%lld", &a); // input from user

//     printf("%lld", a); // output to console

//     return 0; // return 0 to the operating system
//     // return 0 means the program has executed successfully
// }
int main() {
    int a ,b, c;

    scanf("%d %d %d", &a,&b,&c);

    printf("a=%d b=%d c=%d", a ,b, c);

    return 0;
}

/*
* format specifiers:
* %d --> int
* %f --> float
* %c --> char
* %s --> string
* %lf --> double
* %ld --> long int
* %lld --> long long
* %hd --> short int
*/