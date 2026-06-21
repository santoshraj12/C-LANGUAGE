#include <stdio.h>
void fact(int *);
void main(){
    int m;
    printf("enter :-");
    scanf("%d", &m);
    fact(&m);
    printf("%d\n", m);
}
void fact(int *x)
{
    int p=1, i;
    for(i=1; i<=*x; i++) 
    {
       p=p*i;
    }
    *x=p;
    
}

