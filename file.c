#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("student.txt", "w");
    fprintf(fp, "My name is Santosh");

    fclose(fp);

    return 0;
}
