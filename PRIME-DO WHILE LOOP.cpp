// Online C compiler to run C program online
#include <stdio.h>

void main() 
{
    int n,c=0;
    printf(" enter n ");
    scanf("%d",& n );
    int i=2;
    do {
        if (n%i==0)
        { 
            c=1;
            break;
        }
       i++; 
    }
    while (i<n);
    if(c==0)
    printf(" prime ");
    else
    printf(" not prime");
    
}
