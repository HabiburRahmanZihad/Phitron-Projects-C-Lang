/*
This is my first C program.
It prints "Hello, World!" to the console.
*/



/*
*data type: int, char, float, double, string

int --> 4 bytes [-100, 0, 100]
float --> 4 bytes [0.0, 1.0, 2.0]
char --> 1 byte ['a', 'b', 'c', 'A', 'B', 'C', '1', '2', '3', '!', '@', '#',
'$', '%', '^', '&', '*', '(', ')'] bool --> 1 byte [true, false] double --> 8
bytes [0.0, 1.0, 2.0] string --> 2 bytes ["hello", "world"] long long --> 8
bytes [-1000000000, 0, 1000000000]

*keywords: int, char, float, double, string, bool, long long, void, if, else, for,while, do, switch, case, break, continue, return, goto, sizeof, etc...
// variable declaration and initialization
1-variable declaration:--> datatype variable_name = value;
2-variable name should be meaningful and should not start with a number
3-variable name should not contain any special characters except underscore(_)
4-variable name should not be a keyword
5-variable name should not be a reserved word

variable name should not be a function name
*/







#include <stdio.h>

// The main function is the entry point of the program




int main() {
    printf("Hello, World\n");
    printf("Hello, C programming\n");
    printf("hi, My name is Habibur Rahman Zihad\n");
    return 0;
}