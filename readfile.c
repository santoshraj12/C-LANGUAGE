#include <stdio.h>

int main() {
    FILE *fp;
    
    fp=fopen("student.txt","w");
    
    fprintf(fp," I AM FROM PATNA DISTRICT");
    
    fclose(fp);
    
    return 0;
}
