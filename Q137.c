/*Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

/*
Sample Test Cases:
Input 1:
GUEST
Output 1:
Welcome Guest!

*/
#include <stdio.h>

int main(){

    enum roles{ADMIN , USER, GUEST};

    enum roles role;

    printf("Enter user role (0 for ADMIN, 1 for USER, 2 for GUEST): ");
    scanf("%d", (int*)&role);

    if( role == ADMIN){
        printf("Welcome Admin!\n");
    }
    else if(role == USER){
        printf("Welcome User!\n");
    }
    else if(role == GUEST){
        printf("Welcome Guest!\n");
    }
    else{
        printf("Invalid Role\n");
    }
}