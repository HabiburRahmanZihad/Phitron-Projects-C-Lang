#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sum(int arr[], int n) {
    if (n <= 0) return 0;
    return add(arr[n-1], sum(arr, n-1));
}

int main() {
    int n;

    scanf("%d", &n);               // Read the number of elements

    int arr[n];                    // Declare an array of size n (VLA - Variable Length Array)

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);      // Read array elements
    }

    int result = sum(arr, n);      // Calculate the sum recursively

    printf("%d\n", result);        // Output the result
    return 0;
}