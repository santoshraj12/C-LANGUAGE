// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    typedef int* i;
    i a,b,d;
    int c=10,v=20,s=30;
    a=&c;
    b=&v;
    d=&s;
    printf("Start smal %p\n", a);
    printf(" %p\n", b);
    printf("%p\n", d);
    //int *p=&b;
   // printf("%p", b);
    

    return 0;
}
