#include <stdio.h>

int main (){
    int renata=0,paulo=0,branco=0,voto,candidato,total,confirma;
    
    while (1==1){
        printf("Qual e seu voto: ");
        scanf("%d", &voto);
        
        if (voto == 5) candidato = 5;
        else if (voto == 7) candidato = 7;
        else if (voto == 0) candidato = 0;
        else if (voto < 0) break;
        else candidato = 0;
        printf("Confirmacao do voto em %d [1/0]\n", candidato);
        scanf("%d", &confirma);
        
        if (confirma == 0) continue;
        else{
            if (voto == 5) paulo += 1;
            else if (voto == 7) renata += 1;
            else if (voto == 0) branco += 1;
        }
        
    };

    total = paulo + renata + branco;
    if (paulo > renata) printf("Paulo ganhou com %.2f %c dos votos.", ((float)paulo/total)*100, 37);
    else if (renata > paulo) printf("Renata ganhou com %.2f %c dos votos.", ((float)renata/total)*100, 37);
    else if(paulo == renata) printf("Empate.");
    return 0;
}