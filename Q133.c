/*Q133: Create an enum for months and print how many days each month has.

/*
Sample Test Cases:
Input 1:
FEB
Output 1:
28 or 29 days

*/

#include <stdio.h>

int main() {

    
    enum months {JAN=1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};

    enum months month;
    
    printf("Enter month number (1-12): ");
    scanf("%d", (int*)&month);

    switch(month) {
        case JAN: 
            printf("January has 31 days\n");
            break;
        case FEB: 
            printf("February has 28 or 29 days\n");
            break;
        case MAR:
            printf("March has 31 days\n");
            break;
        case APR:
            printf("April has 30 days\n");
            break;
        case MAY:
            printf("May has 31 days\n");
            break;
        case JUN:
            printf("June has 30 days\n");
            break;
        case JUL:
            printf("July has 31 days\n");
            break;
        case AUG:
            printf("August has 31 days\n");
            break;
        case SEP:
            printf("September has 30 days\n");
            break;
        case OCT:
            printf("October has 31 days\n");
            break;
        case NOV:
            printf("November has 30 days\n");
            break;
        case DEC:
            printf("December has 31 days\n");
            break;
        default:
            printf("Invalid month number\n");
            break;
    }

    return 0;
}