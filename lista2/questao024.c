#include <stdio.h>
#include <math.h>

int main()
{
    int co = 1, ca = 1;
    float h;
    while(co <= 500){
        ca = 1;
        while(ca <= 500){
            h = pow(ca * ca + co * co, 1.0/2.0);
            if(ceil(h) == h){
                printf("triangulo %d %d %.0f \n", co, ca, h);
            }
        ca++;
        }
        co++;
    }
    return 0;
}
