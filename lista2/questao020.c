#include <stdio.h>
#include <math.h>


int main (){
  int i,x;
  float fat=1;
  for(i=1;i < 10; i++){
    if (i%2==1){
      for(x=i;x>0;x--){
      fat *= x;
      }
      printf("%.0f\n",fat);
      fat=1;
    }
  }
  return 0;
}