#include <stdio.h>
#include <ctype.h>
#include <string.h>
// void fun (int arr[], int x){

//     for(int i = 0; i < x; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }
void makeFirstcharUpper (char x[]){

  x[0] = toupper(x[0]);
  printf("%s\n", x);
}


// int main() {
//     int arr[] = {1, 2, 3, 4, 5};
//     fun(arr, 5);
//     return 0;
// }

int main() {
    char str[20] = "hello, World!";
    makeFirstcharUpper(str);
    return 0;
}
