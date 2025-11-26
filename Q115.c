/*Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include <stdio.h>
#include <string.h>

void areAnagrams(char *s, char *t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        printf("Not Anagram\n");
        return;
    }

    int char_count[26] = {0};

    for (int i = 0; i < len_s; i++) {
        char_count[s[i] - 'a']++;
    }

    for (int i = 0; i < len_t; i++) {
        char_count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (char_count[i] != 0) {
            printf("Not Anagram\n");
            return;
        }
    }

    printf("Anagram\n");
}

int main() {
    char s1[] = "anagram";
    char t1[] = "nagaram";
    areAnagrams(s1, t1);

    char s2[] = "rat";
    char t2[] = "car";
    areAnagrams(s2, t2);

    return 0;
}