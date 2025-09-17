/*
Problem Statement

You will be given a matrix of size N * N. You need to tell if it is unit matrix or not.

Note: A matrix is called a unit matrix if all the primary diagonal elements are 1 and all the non-diagonal elements are 0.

Input Format

First line will contain N, the row and column of the square matrix.
Then the N * N sized matrix will be given where the values are integer only.
Constraints

1 <= N <= 100
0 <= Values <= 100
Output Format

Ouput "YES" if the matrix is unit matrix, otherwise output "NO" without the quotation marks.
Sample Input 0

3
1 0 0
0 1 0
0 0 1
Sample Output 0

YES
Sample Input 1

5
1 0 0 0 0
0 1 0 0 0
0 0 1 0 1
0 0 0 1 0
0 0 0 0 1
Sample Output 1

NO
*/

/*
🧠 Problem Statement (বাংলায়)

তোমাকে একটি N × N সাইজের স্কয়ার ম্যাট্রিক্স (চতুর্ভুজ ম্যাট্রিক্স) দেওয়া হবে।
তোমার কাজ হলো দেখতে ম্যাট্রিক্সটি unit matrix কিনা।

📌 Unit Matrix কী?

একটি ম্যাট্রিক্সকে unit matrix (বা identity matrix) বলা হয় যদি:

এর primary diagonal (প্রধান কর্ণ) এর সব উপাদান ১ (1) হয়।

এবং বাকি সব উপাদান (অর্থাৎ diagonal ছাড়া) শূন্য (0) হয়।

📈 উদাহরণ:

1 0 0
0 1 0
0 0 1


এই ম্যাট্রিক্সটি একটি unit matrix।

📥 Input Format (ইনপুট ফরম্যাট):

প্রথম লাইনে থাকবে N, অর্থাৎ ম্যাট্রিক্সের আকার (N × N)।

এরপর থাকবে N লাইনের প্রতিটিতে Nটি করে সংখ্যা — যেটা দিয়ে পুরো ম্যাট্রিক্স তৈরি হবে।

📤 Output Format (আউটপুট):

যদি ম্যাট্রিক্সটি unit matrix হয়, প্রিন্ট করবে YES

না হলে প্রিন্ট করবে NO

🧮 Constraints (শর্তাবলি):

1 <= N <= 100

প্রতিটি মান 0 থেকে 100 এর মধ্যে হবে।
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int matrix[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    int isUnitMatrix = 1; // Assume it is a unit matrix

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                // Primary diagonal element
                if(matrix[i][j] != 1) {
                    isUnitMatrix = 0; // Not a unit matrix
                    break;
                }
            } else {
                // Non-diagonal element
                if(matrix[i][j] != 0) {
                    isUnitMatrix = 0; // Not a unit matrix
                    break;
                }
            }
        }
        if(!isUnitMatrix) {
            break;
        }
    }
    if(isUnitMatrix) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}