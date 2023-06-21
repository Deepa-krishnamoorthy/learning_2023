#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
void convertToUpperCase(FILE *sourceFile, FILE *targetFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(toupper(ch), targetFile);
    }
}
void convertToLowerCase(FILE *sourceFile, FILE *targetFile) {
    int ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(tolower(ch), targetFile);
    }
}
void convertToSentenceCase(FILE *sourceFile, FILE *targetFile) {
    int ch;
    int previousChar = '.';
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (previousChar == '.' || previousChar == '!' || previousChar == '?') {
            fputc(toupper(ch), targetFile);
        } else {
            fputc(tolower(ch), targetFile);
        }
        previousChar = ch;
    }
}

int main(int argc, char *argv[]) {
    FILE *sourceFile, *targetFile;
    char *option;
    char *sourceFileName, *targetFileName;

    if (argc < 3) {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp -[u|l|s] sourceFile targetFile\n");
        return 1;
    }

    option = argv[1];
    sourceFileName = argv[2];
    targetFileName = argv[3];

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    targetFile = fopen(targetFileName, "w");
    if (targetFile == NULL) {
        printf("Unable to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }

    if (strcmp(option, "-u") == 0) {
        convertToUpperCase(sourceFile, targetFile);
    } else if (strcmp(option, "-l") == 0) {
        convertToLowerCase(sourceFile, targetFile);
    } else if (strcmp(option, "-s") == 0) {
        convertToSentenceCase(sourceFile, targetFile);
    } else {
        int ch;
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, targetFile);
        }
    }

    fclose(sourceFile);
    fclose(targetFile);
    printf("File copied successfully.\n");
    return 0;
}
