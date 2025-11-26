/*Q138: Print all enum names and integer values using a loop.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
RED=0
YELLOW=1
GREEN=2

*/

#include <stdio.h>


typedef enum { RED,YELLOW,GREEN}Colours;
int main() {
    
    const char *colourNames[] = {"RED", "YELLOW", "GREEN"};

    for(int i = RED; i <= GREEN; i++) {
        
        printf("%s=%d\n", colourNames[i], i);
    }

    return 0;
}