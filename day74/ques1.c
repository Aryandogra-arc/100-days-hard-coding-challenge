Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *source, *destination;
    char sourceName[100], destinationName[100];
    char ch;

    printf("Enter source file name: ");
    scanf("%s", sourceName);

    printf("Enter destination file name: ");
    scanf("%s", destinationName);

    // Open source file in read mode
    source = fopen(sourceName, "r");

    if(source == NULL) {
        printf("Source file not found!");
        return 1;
    }

    // Open destination file in write mode
    destination = fopen(destinationName, "w");

    if(destination == NULL) {
        printf("Unable to create destination file!");
        fclose(source);
        return 1;
    }

    // Copy character by character
    while((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }

    fclose(source);
    fclose(destination);

    printf("File copied successfully to %s", destinationName);

    return 0;
}