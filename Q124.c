/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char sourcePath[100], destPath[100];
    char ch;

    printf("Enter source file path: ");
    scanf("%s", sourcePath);

    printf("Enter destination file path: ");
    scanf("%s", destPath);

    sourceFile = fopen(sourcePath, "r");
    if (sourceFile == NULL) {
        printf("Error: Could not open source file.\n");
        return 1;
    }

    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Could not create destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully to %s\n", destPath);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}