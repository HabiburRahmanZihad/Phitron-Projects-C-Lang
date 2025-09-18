/*
You will be given 3 strings each of same length consisting of only small case letters. In one operation you can change a letter to any other letter of one of the strings.

You have to find out the minimum number of operations to make all 3 strings same.

Input Format

The input will contain 3 Strings.

Constraints

1 <= Length of each string <= 100

Output Format

Print an integer, the minimum number of operations to make the strings same.

Sample Input 0

train
candy
bread
Sample Output 0

9



Position-wise মিলিয়ে দেখি:

Index	str1	str2	str3	Status	Count
0	t	c	b	3 different	+2
1	r	a	r	2 same (r & r)	+1
2	a	n	e	3 different	+2
3	i	d	a	3 different	+2
4	n	y	d	3 different	+2

➡️ Total = 2 + 1 + 2 + 2 + 2 = 9
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char str1[101],str2[101],str3[101];
    scanf("%s %s %s",str1,str2,str3);
    int len=strlen(str1);
    int count=0;
    for(int i=0;i<len;i++){
        if(str1[i]==str2[i] && str2[i]==str3[i]){
            continue;
        }
        else if(str1[i]==str2[i] || str2[i]==str3[i] || str1[i]==str3[i]){
            count+=1;
        }
        else{
            count+=2;
        }
    }
    printf("%d\n",count);
    return 0;
}