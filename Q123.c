/*Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    int ch;
    int chars = 0, words = 0, lines = 0;
    int in_word = 0;

    fp = fopen("sample.txt", "r");

    if (fp == NULL) {
        printf("Error: Could not open file sample.txt\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        chars++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (in_word == 0) {
                words++;
                in_word = 1;
            }
        }
    }

    if (chars > 0) {
        lines++;
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}