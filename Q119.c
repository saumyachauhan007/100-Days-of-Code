/*Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ELEMENT 1024

int findRepeatedElement(int nums[], int n) {
    int seen[MAX_ELEMENT];
    memset(seen, 0, sizeof(seen));

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0 && nums[i] < MAX_ELEMENT) {
            seen[nums[i]]++;
            if (seen[nums[i]] > 1) {
                return nums[i];
            }
        }
    }
    return -1; 
}

int main() {
    int nums1[] = {1, 3, 3, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", findRepeatedElement(nums1, n1));

    int nums2[] = {1, 2, 2};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", findRepeatedElement(nums2, n2));

    int nums3[] = {0, 4, 1, 1, 5};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", findRepeatedElement(nums3, n3));

    return 0;
}