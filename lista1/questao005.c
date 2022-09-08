#include <stdio.h>
int main(){
    float x;
    printf("Digite o valor do consumo: ");
    scanf("%f", &x);
    printf("O valor com o 10%% do estabelecimento fica %.2f reais",(x + x*0.1) );
    return 0;
}
