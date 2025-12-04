#include <stdio.h>

int main() {
    FILE *fp;
    char text[100];

    // Writing to file
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    printf("Enter some text to write into the file: ");
    fgets(text, sizeof(text), stdin);

    fprintf(fp, "%s", text);
    fclose(fp);

    printf("Data written to file successfully.\n");

    // Reading from file
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("\nReading from file:\n");
    while (fgets(text, sizeof(text), fp) != NULL) {
        printf("%s", text);
    }

    fclose(fp);

    return 0;
}
