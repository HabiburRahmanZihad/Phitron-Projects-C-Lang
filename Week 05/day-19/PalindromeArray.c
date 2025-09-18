#include <stdio.h>

int isPalindrome(int arr[], int start, int end) {
    if (start >= end) {
        return 1;  // Base case: all characters matched
    }
    if (arr[start] != arr[end]) {
        return 0;  // Not a palindrome
    }
    return isPalindrome(arr, start + 1, end - 1);
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (isPalindrome(arr, 0, n - 1)) {
        printf("The array is a palindrome.\n");
    } else {
        printf("The array is not a palindrome.\n");
    }

    return 0;
}