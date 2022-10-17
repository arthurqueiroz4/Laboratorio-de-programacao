#include <stdio.h>

int main()
{
    int a, b;
    int *p;
    p = &a;
    *p = 1;
    p = &b;
    *p = 2;
    printf("[%p] %d e [%p] %d",&a,a,&b,b);
    return 0;
}
