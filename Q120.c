/*Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic

Input 2:
str = The classes are supposed to start early.
Output 2:
The Classes Are Supposed To Start Early.

Input 3:
str = We are going to look at 26 different test cases.
Output 3:
We Are Going To Look At 26 Different Test Cases.

*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toTitleCase(char *str) {
    if (str == NULL || str[0] == '\0') {
        return;
    }

    int n = strlen(str);
    int capitalize = 1;

    for (int i = 0; i < n; i++) {
        if (isspace((unsigned char)str[i])) {
            capitalize = 1;
        } else if (capitalize) {
            str[i] = toupper((unsigned char)str[i]);
            capitalize = 0;
        }
    }
}

int main() {
    char str1[] = "I am trying to build logic.";
    toTitleCase(str1);
    printf("%s\n", str1);

    char str2[] = "The classes are supposed to start early.";
    toTitleCase(str2);
    printf("%s\n", str2);

    char str3[] = "We are going to look at 26 different test cases.";
    toTitleCase(str3);
    printf("%s\n", str3);

    return 0;
}