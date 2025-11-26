/*Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include <stdio.h>


typedef enum {
    MALE,
    FEMALE,
   
} Gender;

typedef struct {
    int id;
    Gender gender; 
} Person;

int main() {

    Person p;
    p.gender = MALE; 

    switch(p.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}