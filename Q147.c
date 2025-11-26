/*Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    FILE *fp;
    int n, i;

    fp = fopen("empdata.bin", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }

    printf("Enter the number of employees: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter Name, ID and Salary: ");
        scanf("%s %d %f", emp.name, &emp.id, &emp.salary);
        fwrite(&emp, sizeof(struct Employee), 1, fp);
    }

    fclose(fp);

    fp = fopen("empdata.bin", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }

    printf("\n--- Employee Details from Binary File ---\n");
    while (fread(&emp, sizeof(struct Employee), 1, fp)) {
        printf("Name: %s | ID: %d | Salary: %.2f\n", emp.name, emp.id, emp.salary);
    }

    fclose(fp);

    return 0;
}