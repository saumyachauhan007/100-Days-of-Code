/*Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

/*
Sample Test Cases:
Input 1:
arr[] = [2, 3, -8, 7, -1, 2, 3]
Output 1:
11

Input 2:
arr[] = [-2, -4]
Output 2:
-2

Input 3:
arr[] = [5, 4, 1, 7, 8]
Output 3:
25

*/
#include <stdio.h>

long long maxSubArraySum(int arr[], int n) {
    if (n == 0) return 0;
    long long max_so_far = arr[0];
    long long curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > curr_max + arr[i]) {
            curr_max = arr[i];
        } else {
            curr_max += arr[i];
        }

        if (max_so_far < curr_max) {
            max_so_far = curr_max;
        }
    }
    return max_so_far;
}

int main() {
    int arr1[] = {2, 3, -8, 7, -1, 2, 3};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Output 1:\n%lld\n", maxSubArraySum(arr1, n1));

    int arr2[] = {-2, -4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("\nOutput 2:\n%lld\n", maxSubArraySum(arr2, n2));

    int arr3[] = {5, 4, 1, 7, 8};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("\nOutput 3:\n%lld\n", maxSubArraySum(arr3, n3));

    return 0;
}