/*Q142: Store details of 5 students in an array of structures and print all.

Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details

*/
#include <stdio.h>

struct student_data {
    char name[50];
    int roll_num;
    int marks;
};

int main() {
   
    struct student_data students[5]; 
    int i;

    printf(" Enter details of 5 Students:\n");

    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("Enter Name: ");
        scanf("%s", students[i].name); 
        
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_num);
        
        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }

    printf("%-15s %-10s %-10s\n", "Name", "Roll No", "Marks");

    for (i = 0; i < 5; i++) {
        printf("%-15s %-10d %-10d\n", 
               students[i].name, 
               students[i].roll_num, 
               students[i].marks);
        }
    return 0;
}