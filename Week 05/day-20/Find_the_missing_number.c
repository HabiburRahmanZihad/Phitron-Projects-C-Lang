/*
Problem Statement

Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
Constraints

1 < T <= 100000
0 <= M <= 10^18
1 <= A, B, C <= 10^6
Output Format

Print the missing number. Don't forget to print a new line after it.
Sample Input 0

4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15
Sample Output 0

5
-1
-1
0
Sample Input 1

3
20 5 1 1
18 2 3 3
0 10 20 30
Sample Output 1

4
1
0



💡 সমস্যার বিবরণ (Problem Statement in Bangla):

তোমাকে দেওয়া হবে:

চারটি সংখ্যার গুণফল (Multiplication) M

আর ওই চারটি সংখ্যার মধ্যে যেকোনো তিনটি সংখ্যা: A, B, C

তোমার কাজ হলো:
👉 বাকি যে একটি সংখ্যা নেই (missing number), তা বের করা।

✅ লক্ষ্য:

যদি A × B × C × X = M,
তাহলে X = M / (A × B × C)
এখানে X হলো missing number.

⚠️ কিন্তু কিছু শর্ত আছে:

যদি (A × B × C) = 0 হয়:

এবং M = 0 হয়, তাহলে X হতে পারে 0

কিন্তু M ≠ 0 হলে, অসম্ভব — কারণ কোনো সংখ্যা × 0 = 0 হয়, 0 × কিছু ≠ positive number

যদি (A × B × C) ≠ 0 হয়:

তাহলে দেখো M কি (A × B × C) দিয়ে বিভাজ্য (divisible)?

divisible হলে X = M / (A × B × C)

divisible না হলে X সঠিকভাবে নির্ণয় করা অসম্ভব, উত্তর হবে -1

🧪 উদাহরণ:
Input:
4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15

ব্যাখ্যা:
1. M = 20, A = 1, B = 2, C = 2

👉 X = 20 / (1×2×2) = 20 / 4 = 5 ✅

2. M = 10, A = 2, B = 2, C = 1

👉 X = 10 / (2×2×1) = 10 / 4 = 2.5 ❌ → ভগ্নাংশ, তাই উত্তর -1

3. M = 1, A = 1, B = 2, C = 3

👉 X = 1 / (1×2×3) = 1 / 6 = 0.166 ❌ → ভগ্নাংশ, তাই উত্তর -1

4. M = 0, A = 3, B = 10, C = 15

👉 A×B×C = 450 ≠ 0 → X = 0 / 450 = 0 ✅

✅ আউটপুট:
5
-1
-1
0
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long m,a,b,c;
        scanf("%lld %lld %lld %lld",&m,&a,&b,&c);
        if(a*b*c==0){
            if(m==0){
                printf("0\n");
            }
            else{
                printf("-1\n");
            }
        }
        else if(m%(a*b*c)==0){
            printf("%lld\n",m/(a*b*c));
        }
        else{
            printf("-1\n");
        }
    }
    return 0;
}