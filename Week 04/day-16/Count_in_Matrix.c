/*
Problem Statement

You will be given a 2D matrix of N * M size. You will also be given X numbers. For each of the Number you have to print how many times the Number have appeared in the matrix.

Input Format

First line will contain N and M the number of row and column respectively and X,the number of integers we are going to search.
Then the 2D matrix will be given.
Then X lines will contain X integer Numbers.
Constraints

2 <= N,M,X <= 100
0 <= Element <= 1000
0 <= Number <=1000
Output Format

For each of the x integers print a single line with how many times that number have appeared.

Sample Input 0

2 3 3
1 2 5
2 6 4
2
6
7

Sample Output 0

2
1
0
*/


#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int matrix[n][m];   // ম্যাট্রিক্স ডিক্লেয়ার করা হলো
    int freq[1001] = {0}; // 0 থেকে 1000 পর্যন্ত মান গোনার জন্য ফ্রিকোয়েন্সি অ্যারে

    // ম্যাট্রিক্স ইনপুট এবং একই সাথে মান গোনা (count করা)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int val;
            scanf("%d", &val);
            matrix[i][j] = val;
            freq[val]++;  // মানটা কয়বার আছে, তা গোনা হচ্ছে
        }
    }

    // X সংখ্যক সংখ্যার জন্য খোঁজা শুরু
    for(int i = 0; i < x; i++) {
        int num;
        scanf("%d", &num);
        printf("%d\n", freq[num]);  // সেই সংখ্যাটি ম্যাট্রিক্সে কতবার আছে, তা প্রিন্ট
    }

    return 0;
}