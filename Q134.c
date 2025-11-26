/*Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.

/*
Sample Test Cases:
Input 1:
FAILURE
Output 1:
Operation failed

*/

#include <stdio.h>

int main(){ 

enum status{ SUCCESS, FAILURE, TIMEOUT};

enum status code;

printf("Enter status code (0 for SUCCESS, 1 for FAILURE, 2 for TIMEOUT): ");
scanf("%d", (int*)&code);

if(code == SUCCESS){
    printf("Operation successful\n");
}
else if(code == FAILURE){
    printf("Operation failed\n");
} 
else if(code == TIMEOUT){
    printf("Operation timed out\n");
}
else{
    printf("Invalid Code\n");
}




 return 0;
}