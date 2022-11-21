// Online C compiler to run C program online
#include <stdio.h>

struct aluno{
    float n1;
    float n2;
    float m;
};

int main() {
    struct aluno jon;
    struct aluno levy;
    puts("JON N1:");
    scanf("%f", &jon.n1);
    puts("JON N2:");
    scanf("%f", &jon.n2);
    puts("LEVY N1:");
    scanf("%f", &levy.n1);
    puts("LEVY N2:");
    scanf("%f", &levy.n2);
    
    jon.m = (jon.n1 + jon.n2)/2;
    printf("Media de Jon: %.2f", jon.m);
    levy.m = ((float)levy.n1 + levy.n2)/2;
    printf("\nMedia de Levy: %.2f", levy.m);

    return 0;
}
