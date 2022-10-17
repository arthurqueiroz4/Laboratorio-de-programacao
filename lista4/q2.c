#include <stdio.h>

int main()
{
    int a, b, aux;
    puts("Valor 1:");
    scanf("%d",&a);
    puts("Valor 2:");
    scanf("%d",&b);

    int *pa;
    int *pb;
    
    pa = &a;
    pb = &b;
    
    aux = a;
    
    *pa = b;
    *pb = aux;
    printf("[%p] Valor 1: %d \n[%p] Valor 2: %d",&a,a,&b,b);
    return 0;
}