#include <stdio.h>
int main() {
    FILE *fptr = fopen("example.txt", "w");
    if (fptr == NULL) {
        printf("Error opening file\n");
        return 1;
    }
    fprintf(fptr, "Hello File I/O\n");
    fclose(fptr);
    return 0;
}
