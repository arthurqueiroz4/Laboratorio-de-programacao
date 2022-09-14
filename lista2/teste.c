#include <stdio.h>

int main (){
    int b[5];

    b[0] = 2;
    b[0] = 3;
    b[2] = 4;
    b[3] = 5;
    b[4] = 6;

    //b[1] = 3;
    
    for(int i=0; i<5; i++){
        printf("%d\n",b[i]);
    }
}