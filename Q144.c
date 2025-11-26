/*Q144: Write a function that accepts a structure as parameter and prints its members.

/*
Sample Test Cases:
Input 1:
Student: Neha 104 92
Output 1:
Name: Neha | Roll: 104 | Marks: 92

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
    printf("Enter the number of students:");
    scanf("%d",&n);

struct student student_data[50];
 for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", student_data[i].name, &student_data[i].roll_nm, &student_data[i].Marks);
    }


 for (i = 0; i < n; i++) {
        printf("Name: %s | Roll: %d | Marks: %d",student_data[i].name,student_data[i].roll_nm,student_data[i].Marks);
        
    }


return 0;

}
