/*
You will be given an Array of N integers, print the count of numbers that have appeared only once.

Input Format

The first line will contain an integer N.
The next line will contain N integers.
Constraints

1 <= N <= 10^5
1 <= A[i] <= 10^5
Output Format

Print a single integer,the count of numbers that have apeared only once in the array.

Sample Input 0

10
1 4 3 3 5 2 4 6 2 3
Sample Output 0

3
Explanation 0

In the sample only 1, 5, 6 have apeared only once in the array.So, the count is 3.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int freq[100001] = {0}; // যেহেতু A[i] ≤ 100000

    // ইনপুট নেওয়া ও ফ্রিকোয়েন্সি হিসাব করা
    for (int i = 0; i < n; i++) {
        int num;
        scanf("%d", &num);
        freq[num]++;
    }

    int count = 0;
    // একবারই এসেছে এমন সংখ্যা গুনছি
    for (int i = 1; i <= 100000; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
