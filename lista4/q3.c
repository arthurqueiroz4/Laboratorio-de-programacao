#include <stdio.h>

int main()
{
    int num1, num2=99999;
    int *pnum1 = &num1;
    int *pnum2 = &num2;;
    
    while (1){
        puts("Digite um valor > 0: ");
        scanf("%d",pnum1);
        
        if (*pnum1 < 0){
            break;
        }
        
        if (*pnum1 < *pnum2){
            printf("%d\n",*pnum1);
            *pnum2 = *pnum1;
        } else {
            printf("Menor valor digitado: %d\n", *pnum2);
        }
    }
    
    return 0;
}