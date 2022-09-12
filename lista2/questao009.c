#include <stdio.h>

int main (){
    int x, y, z, i;

    x = 0;
    y = 1;

    for(i=0;i<20;i++){
        z = x + y;
        x = y;
        y = z;
        
        printf("%d ",z);
    }
    
    return 0;
}