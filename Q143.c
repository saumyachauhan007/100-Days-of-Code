/*Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)

*/
#include <stdio.h>

struct student_data {
    char name[50];
    int roll_num;
    int marks;
};

int main() {
    struct student_data students[50];
    int n, i, max_index = 0;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter details for student %d (Name Roll Marks): ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_num, &students[i].marks);
    }

    for (i = 1; i < n; i++) {
        if (students[i].marks > students[max_index].marks) {
            max_index = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", students[max_index].name, students[max_index].marks);

    return 0;
}
