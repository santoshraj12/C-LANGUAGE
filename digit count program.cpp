#include <stdio.h>
int main() {
    int a=123,s=1;
    for(int i=0;i<a;i++)
    {
        a=a/10;
        s++;
    }
    printf(" s=%d", s);

    return 0;
}

//Digit count
