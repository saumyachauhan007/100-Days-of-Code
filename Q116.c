/*Q116: Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".

/*
Sample Test Cases:
Input 1:
nums = [2,7,11,15], target = 9
Output 1:
0 1

Input 2:
nums = [3,2,4], target = 6
Output 2:
1 2

Input 3:
nums = [3,3], target = 6
Output 3:
0 1

*/
#include <stdio.h>

void findTwoSum(int nums[], int n, int target) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return;
            }
        }
    }
    printf("-1 -1\n");
}

int main() {
    int nums1[] = {2, 7, 11, 15};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int target1 = 9;
    findTwoSum(nums1, n1, target1);

    int nums2[] = {3, 2, 4};
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    int target2 = 6;
    findTwoSum(nums2, n2, target2);

    int nums3[] = {3, 3};
    int n3 = sizeof(nums3) / sizeof(nums3[0]);
    int target3 = 6;
    findTwoSum(nums3, n3, target3);

    return 0;
}