/*Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>


struct student_data{
    char name[50];
    int roll_num;
    int marks;
};

int main(){
    srand(time(NULL));
    int num=rand();
    int num1=(rand() % 101  );

struct student_data student1;

strcpy(student1.name,"Asha");
student1.roll_num=num;
student1.marks=num1;

printf("NAME:%s\n",student1.name);
printf("ROLL_NUM:%d\n",student1.roll_num);
printf("MARKS:%d\n",student1.marks);



    return 0;
}