/*Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int findMissingNumber(int nums[], int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    
    for (int i = 0; i < n; i++) {
        actualSum += nums[i];
    }
    
    return expectedSum - actualSum;
}

int main() {
    int nums1[] = {0, 3, 2, 4};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("%d\n", findMissingNumber(nums1, n1));

    int nums2[] = {1, 2, 3};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("%d\n", findMissingNumber(nums2, n2));

    int nums3[] = {0, 4, 3, 1, 5};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    printf("%d\n", findMissingNumber(nums3, n3));

    return 0;
}