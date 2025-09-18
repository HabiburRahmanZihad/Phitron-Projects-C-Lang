/*
You will be given a 2D matrix of N * M size. The matrix will contain integer values only. You need to print the matrix after doing the following operations.

Firstly you will swap all the elements of the first column with the elements of the last column.

After that you will swap the elements of the first row with elements of the last row.

Input Format

First line will contain N and M the row and column respectively.
Then the 2D matrix will be given.
Constraints

2 <= N,M <= 100
0 <= Element <= 100
Output Format

Print the matrix after the required operations.

Sample Input 0

3 4
1 2 3 4
5 6 7 8
6 5 4 2
Sample Output 0

2 5 4 6
8 6 7 5
4 2 3 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int temp=arr[i][0];
        arr[i][0]=arr[i][m-1];
        arr[i][m-1]=temp;
    }
    for(int j=0;j<m;j++){
        int temp=arr[0][j];
        arr[0][j]=arr[n-1][j];
        arr[n-1][j]=temp;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}