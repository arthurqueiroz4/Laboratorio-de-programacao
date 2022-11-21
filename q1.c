// Online C compiler to run C program online
#include <stdio.h>

struct aluno{
    int n1;
    int n2;
    float m;
};

int main() {
    struct aluno jon;
    struct aluno levy;
    
    jon.n1 = 10;
    jon.n2 = 5;
    
    jon.m = ((float)jon.n1 + jon.n2)/2;
    printf("Media de Jon: %.2f", jon.m);
    levy.n1 = 10;
    levy.n2 = 9;
    levy.m = ((float)levy.n1 + levy.n2)/2;
    printf("\nMedia de Levy: %.2f", levy.m);

    return 0;
}
