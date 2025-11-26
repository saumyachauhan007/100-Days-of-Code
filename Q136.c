/*Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.

/*
Sample Test Cases:
Input 1:
ADD 10 20
Output 1:
30

*/

#include <stdio.h>
int main(){

    enum operations{ADD, SUBTRACT, MULTIPLY};

    enum operations op;
    int a, b, result;

    printf("Enter operation (0 for ADD, 1 for SUBTRACT, 2 for MULTIPLY) followed by two integers: ");
    scanf("%d %d %d", (int*)&op, &a, &b);

    switch(op){
        case ADD:
            result = a + b;
            printf("Result: %d\n", result);
            break;
        case SUBTRACT:
            result = a - b;
            printf("Result: %d\n", result);
            break;
        case MULTIPLY:
            result = a * b;
            printf("Result: %d\n", result);
            break;
        default:
            printf("Invalid Operation\n");
    }

    return 0;
}