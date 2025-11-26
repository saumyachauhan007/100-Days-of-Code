/*Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020

*/

#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct employee_data {
    char name[50];
    int ID;
    struct Date date; 
};

int main() {
    int i, n;

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct employee_data employee[50];


    for (i = 0; i < n; i++) {
        printf("\nEnter details for employee %d (Name ID Day Month Year): ", i + 1);
        scanf("%s %d %d %d %d", 
            employee[i].name, 
            &employee[i].ID, 
            &employee[i].date.day, 
            &employee[i].date.month, 
            &employee[i].date.year
        );
    }


 for (i = 0; i < n; i++) {
 printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n", 
            employee[i].name, 
            employee[i].ID, 
            employee[i].date.day, 
            employee[i].date.month, 
            employee[i].date.year
        );
    }

    return 0;
}