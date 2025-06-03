#include <stdio.h>

int main() {
    char sourceFile[100], destFile[100];
    FILE *src, *dest;
    char ch;
  
    printf("Enter the source file name: ");
    scanf("%s", sourceFile);

    printf("Enter the destination file name: ");
    scanf("%s", destFile);

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error: Cannot open source file '%s'.\n", sourceFile);
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error: Cannot create destination file '%s'.\n", destFile);
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("✅ File copied successfully from '%s' to '%s'.\n", sourceFile, destFile);

    fclose(src);
    fclose(dest);

    return 0;
}
