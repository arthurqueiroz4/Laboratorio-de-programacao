#include <stdio.h>

int main()
{
    double pi = 4.0;
    int divisor = 3;
    for(int i = 0; i <= 15000; i ++){
        if(i % 2){
            pi += 4.0/divisor;
        }else {
            pi -= 4.0/divisor;
        }
        divisor += 2;
        printf("pi = %f \n", pi);
    }

    return 0;
}