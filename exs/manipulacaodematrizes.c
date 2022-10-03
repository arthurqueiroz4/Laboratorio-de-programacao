#include <stdio.h>
#define TAM 10
#include <time.h>
#include <stdlib.h>


int main()
{
    int matriz[TAM][TAM], vetor[TAM*TAM];
    srand(time(NULL));
    
    for(int i=0;i<TAM;i++){
        for(int z=0;z<TAM;z++){
            matriz[i][z] = rand() % 100;
            printf("%d  ",matriz[i][z]);
        }
      puts("\n");
      }
    int cont = 0; 
    for(int i=0;i<TAM;i++){
        for(int z=0;z<TAM;z++){
          vetor[cont] = matriz[i][z];
          cont += 1;
        }
      }
    int trocar;
    for(int i=0;i<TAM*TAM-1;i++){
        for(int z=i+1;z<TAM*TAM;z++){
          if (vetor[i]>vetor[z]){
            trocar = vetor[i];
            vetor[i] = vetor[z];
            vetor[z] = trocar;
          }
      }
    }
    //mediana
    puts("\n");
    puts("Mediana: ");
    printf("%d * %d / 2 = ",vetor[50],vetor[51] );
    printf("%.1f",(float)(vetor[50] + vetor[51])/2);
    // media 
    int soma=0;
    for(int i=0;i<TAM*TAM;i++){
       soma += vetor[i];
    }
    puts("\n");
    puts("Media: ");
    printf("%d\n\n",soma / (TAM*TAM));
    // moda
    int listafreq[TAM*TAM];
    int cont2 = 0,cont1=0;
    for(int i=0; i<TAM*TAM;i++){
      cont2 = 0;
      for(int z=0;z<TAM*TAM;z++){
        if (i == vetor[z]){
          cont2 += 1;
        }
      }
      listafreq[cont1]=cont2;
      cont1 += 1;
    }
  int maior;
  for(int i=0;i<TAM*TAM;i++){
      if (i==0){
        maior = listafreq[i];
      } else {
        if (maior < listafreq[i]){
          maior = listafreq[i];
        }
      }
    }

  puts("Moda: ");
  int cont3=0;
  for(int i=0;i<TAM*TAM;i++){
        if (maior == listafreq[i]){
        printf("%d ",cont3);    
        }
    cont3 += 1;
    }
    return 0;
  }