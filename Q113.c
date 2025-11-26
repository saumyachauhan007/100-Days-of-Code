/*Q113: Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

/*
Sample Test Cases:
Input 1:
arr[] = [10, 5, 4, 3, 48, 6, 2, 33, 53, 10], k = 4
Output 1:
5

Input 2:
arr[] = [7, 10, 4, 3, 20, 15], k = 3
Output 2:
7

*/
#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int findKthSmallest(int arr[], int n, int k) {
    qsort(arr, n, sizeof(int), compare);
    return arr[k - 1];
}

int main() {
    int arr1[] = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 4;
    printf("%d\n", findKthSmallest(arr1, n1, k1));

    int arr2[] = {7, 10, 4, 3, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    printf("%d\n", findKthSmallest(arr2, n2, k2));

    return 0;
}