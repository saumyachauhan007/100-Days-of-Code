/*Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[1000];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int k;
    scanf("%d", &k);

    if (k > n) {
        printf("-1\n");
        return 0;
    }

    int max_sum = INT_MIN;
    int current_sum = 0;

    for (i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    max_sum = current_sum;

    for (i = k; i < n; i++) {
        current_sum = current_sum + arr[i] - arr[i - k];
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("%d\n", max_sum);

    return 0;
}