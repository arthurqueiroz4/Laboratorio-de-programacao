#include <stdio.h>

struct UF{
    char codigo[3];
    char descricao[50];
};

int main(){
    struct UF estado1, estado2;
    puts("Primeira unidade federativa: ");
    gets(estado1.codigo);
    puts("Descricao: ");
    gets(estado1.descricao);
    puts("Segunda unidade federativa: ");
    gets(estado2.codigo);
    puts("Descricao: ");
    gets(estado2.descricao);
    printf("Primeria unidade: %s\nDescricao: %s\nSegunda unidade: %s\nDescricao: %s", estado1.codigo,estado1.descricao, estado2.codigo, estado2.descricao);
}
