/*Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int lengthOfLongestSubstring(char * s){
    int n = strlen(s);
    if (n == 0) {
        return 0;
    }
    
    int maxLength = 0;
    int start = 0;
    int char_index[256]; 
    memset(char_index, -1, sizeof(char_index));

    for (int end = 0; end < n; end++) {
        unsigned char currentChar = (unsigned char)s[end];
        
        if (char_index[currentChar] >= start) {
            start = char_index[currentChar] + 1;
        }
        
        char_index[currentChar] = end;
        
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    char s1[] = "abcabcbb";
    printf("%d\n", lengthOfLongestSubstring(s1));

    char s2[] = "bbbbb";
    printf("%d\n", lengthOfLongestSubstring(s2));

    char s3[] = "pwwkew";
    printf("%d\n", lengthOfLongestSubstring(s3));

    return 0;
}