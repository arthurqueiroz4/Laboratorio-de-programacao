#include <stdio.h>

struct aluno{
    float n1;
    //float n2;
    //float m;
    struct aluno *p;
};

int main() {
    struct aluno jon, levy, jorge;
    jon.p = &levy;
    levy.p = &jorge;
    jorge.p = NULL;
    
    puts("JON N1:");
    scanf("%f", &jon.n1);

    puts("LEVY N1:");
    scanf("%f", &levy.n1);
    puts("JORGE N1:");
    scanf("%f", &jorge.n1);
    
    struct aluno *i;
    
    for(i=&jon; i!=NULL; i=i->p){
        printf("%2.f ", i->n1);
    }
    

    return 0;
}
