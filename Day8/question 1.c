#include <stdio.h>
int main() {
    FILE *sourceFile, *targetFile;
    char buffer[1024];
    size_t bytesRead;
    sourceFile = fopen("source.txt", "rb");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }
    targetFile = fopen("target.txt", "wb");
    if (targetFile == NULL) {
        printf("Unable to create the target file.\n");
        fclose(sourceFile);
        return 1;
    }
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, targetFile);
    }
    fclose(sourceFile);
    fclose(targetFile);

    printf("File copied successfully.\n");

    return 0;
}
