#include <stdio.h>

int main (){
    int i;

    for(i=15;i<91;i++){
        if (i % 4 == 0) printf("%d ", i*i);
    }
    return 0;
}