#include <stdio.h>
int main() {
    FILE *fptr;
    char text[100];

    fptr = fopen("file.txt", "w");
    fprintf(fptr, "Hello, file!\n");
    fclose(fptr);

    fptr = fopen("file.txt", "r");
    fgets(text, 100, fptr);
    printf("File content: %s\n", text);
    fclose(fptr);

    return 0;
}
