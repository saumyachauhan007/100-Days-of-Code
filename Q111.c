/*Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[] = [-8, 2, 3, -6, 10], k = 2
Output 1:
-8 0 -6 -6

Input 2:
arr[] = [12, -1, -7, 8, -15, 30, 16, 28], k = 3
Output 2:
-1 -1 -7 -15 -15 0

Input 3:
arr[] = [12, 1, 3, 5], k = 3
Output 3:
0 0

*/
#include <stdio.h>
#include <stdlib.h>

void findFirstNegativeInWindow(int arr[], int n, int k) {
    if (n == 0) return;

    int* queue = (int*)malloc(sizeof(int) * n);
    int front = 0;
    int rear = -1;

    for (int i = 0; i < k; ++i) {
        if (arr[i] < 0) {
            queue[++rear] = i;
        }
    }

    if (front <= rear) {
        printf("%d", arr[queue[front]]);
    } else {
        printf("0");
    }

    for (int i = k; i < n; ++i) {
        while (front <= rear && queue[front] <= i - k) {
            front++;
        }

        if (arr[i] < 0) {
            queue[++rear] = i;
        }

        if (front <= rear) {
            printf(" %d", arr[queue[front]]);
        } else {
            printf(" 0");
        }
    }

    printf("\n");
    free(queue);
}

int main() {
    int arr1[] = {-8, 2, 3, -6, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    printf("Output 1: ");
    findFirstNegativeInWindow(arr1, n1, k1);

    int arr2[] = {12, -1, -7, 8, -15, 30, 16, 28};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("Output 2: ");
    findFirstNegativeInWindow(arr2, n2, k2);

    int arr3[] = {12, 1, 3, 5};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 3;
    printf("Output 3: ");
    findFirstNegativeInWindow(arr3, n3, k3);

    return 0;
}