/*Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

/*
Sample Test Cases:
Input 1:
nums1 = [2,7,11,15] nums2 = [4,8,10]
Output 1:
2 4 7 8 10 11 15

Input 2:
nums1 = [1,2,7] nums2 = [9,10,17]
Output 2:
1 2 7 9 10 17

Input 3:
nums1 = [-10,-2,7] nums2 = [-3, -1, 7]
Output 3:
-10 -3 -2 -1 7 7

*/#include <stdio.h>

void printMergedSorted(int nums1[], int m, int nums2[], int n) {
    int i = 0, j = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            printf("%d ", nums1[i]);
            i++;
        } else {
            printf("%d ", nums2[j]);
            j++;
        }
    }

    while (i < m) {
        printf("%d ", nums1[i]);
        i++;
    }

    while (j < n) {
        printf("%d ", nums2[j]);
        j++;
    }
    printf("\n");
}

int main() {
    int nums1_1[] = {2, 7, 11, 15};
    int m1 = sizeof(nums1_1) / sizeof(nums1_1[0]);
    int nums2_1[] = {4, 8, 10};
    int n1 = sizeof(nums2_1) / sizeof(nums2_1[0]);
    printMergedSorted(nums1_1, m1, nums2_1, n1);

    int nums1_2[] = {1, 2, 7};
    int m2 = sizeof(nums1_2) / sizeof(nums1_2[0]);
    int nums2_2[] = {9, 10, 17};
    int n2 = sizeof(nums2_2) / sizeof(nums2_2[0]);
    printMergedSorted(nums1_2, m2, nums2_2, n2);

    int nums1_3[] = {-10, -2, 7};
    int m3 = sizeof(nums1_3) / sizeof(nums1_3[0]);
    int nums2_3[] = {-3, -1, 7};
    int n3 = sizeof(nums2_3) / sizeof(nums2_3[0]);
    printMergedSorted(nums1_3, m3, nums2_3, n3);

    return 0;
}