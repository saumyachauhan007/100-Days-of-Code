/*Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

/*
Sample Test Cases:
Input 1:
nums = [1,2,3,4]
Output 1:
[24,12,8,6]

Input 2:
nums = [-1,1,0,-3,3]
Output 2:
[0,0,9,0,0]

*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[1000];
    int i;
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int result[1000];

    int prefix_product = 1;
    for (i = 0; i < n; i++) {
        result[i] = prefix_product;
        prefix_product *= nums[i];
    }

    int suffix_product = 1;
    for (i = n - 1; i >= 0; i--) {
        result[i] *= suffix_product;
        suffix_product *= nums[i];
    }

    for (i = 0; i < n; i++) {
        printf("%d", result[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("\n");

    return 0;
}