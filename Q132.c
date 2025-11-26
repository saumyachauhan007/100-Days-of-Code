/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

/*
Sample Test Cases:
Input 1:
GREEN
Output 1:
Go

*/

#include <stdio.h>
int main(){

typedef enum{RED , YELLOW,  GREEN}LIGHTS;

LIGHTS signal;

printf("Enter traffic light signal (0 for RED, 1 for YELLOW, 2 for GREEN): ");
scanf("%d", (int*)&signal);

LIGHTS *lightPtr = &signal;

if(*lightPtr == 0){
    printf("Stop\n");
}
else if(*lightPtr == 1){
    printf("Wait\n");
}
else if(*lightPtr == 2){
    printf("Go\n");
}
else{
    printf("Invalid Signal\n");
}
    



    return 0;
}