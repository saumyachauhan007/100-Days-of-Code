/*Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96

*/
#include <stdio.h>

struct student{
    char name[50];
    int roll_nm;
    int Marks;
};

int main(){
    int n;
    int i;
    int top_std=0;
    printf("Enter the number of students:");
    scanf("%d",&n);

struct student student_data[50];
 for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", student_data[i].name, &student_data[i].roll_nm, &student_data[i].Marks);
    }

for (i = 1; i < n; i++) {
        if (student_data[i].Marks > student_data[top_std].Marks) {
            top_std = i;
        }
    }
 printf("Top Student: %s | Roll: %d |Marks: %d\n", student_data[top_std].name, student_data[top_std].roll_nm,student_data[top_std].Marks);

return 0;

}