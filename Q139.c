/*Q139: Show that enums store integers by printing assigned values.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
SUCCESS=0, FAILURE=1, TIMEOUT=2

*/
#include <stdio.h>
int main(){
    enum status{SUCCESS,FAILURE,TIMEOUT};

    printf("SUCCESS stores value:%d\n",SUCCESS);
    printf("FAILURE stores value:%d\n",FAILURE);
    printf("TIMEOUT stores value%d",TIMEOUT);
    return 0;
}